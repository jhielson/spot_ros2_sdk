import os.path
import rclpy, random
from rclpy.node import Node
from std_msgs.msg import String
from create_message_types.srv import Light, Camera, CameraPTZ, Compositor, Audio, Webrtc

class WrapperExample(Node):

    def __init__(self):
        super().__init__('Example_SRV')

        # Srv
        self.client_light = self.create_client(Light,'light')
        while not self.client_light.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Sevice Light is not available, waiting again ...')
        self.req_light = Light.Request()

        self.client_camera_ptz = self.create_client(CameraPTZ,'camera_ptz')
        while not self.client_camera_ptz.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Sevice Camera_ptz is not available, waiting again ...')
        self.req_camera_ptz = CameraPTZ.Request()

        self.client_camera = self.create_client(Camera,'camera_save')
        while not self.client_camera.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Sevice Camera is not available, waiting again ...')
        self.req_camera = Camera.Request()

        self.client_compositor = self.create_client(Compositor,'compositor')
        while not self.client_compositor.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Sevice Compositor is not available, waiting again ...')
        self.req_compositor = Compositor.Request()

        self.client_audio = self.create_client(Audio,'audio')
        while not self.client_audio.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Sevice Audio is not available, waiting again ...')
        self.req_audio = Audio.Request()

        self.client_webrtc = self.create_client(Webrtc,'webrtc')
        while not self.client_webrtc.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Sevice Webrtc is not available, waiting again ...')
        self.req_webrtc = Webrtc.Request()

        # PTZ
        self.pan = 1.0
        self.tilt = 1.0
        self.zoom = 1.0

        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 1

        # Flag
        self.busy_light = 0
        self.busy_camera = 0
        self.busy_cameraPTZ = 0
        self.busy_audio = 0
        self.busy_webrtc = 0
        self.busy_compositor = 0

    def send_webrtc_request(self, time, command):
        self.req_webrtc.hostname = "192.168.80.3" 
        self.req_webrtc.command = "webrtc"
        self.req_webrtc.time = time
        self.req_webrtc.dst_prefix = '/root/ros2_ws/src/spot_cam_ros2/images/video' 
        self.req_webrtc.sdp_port = '31102'
        self.req_webrtc.cam_ssl_cert = "None"
        self.req_webrtc.sdp_filename = 'h264.sdp'
        self.req_webrtc.track = 'video'
        self.req_webrtc.webrtc_command = command
        self.req_webrtc.verbose = False
        print("Send a webrtc request")
        self.future_webrtc = self.client_webrtc.call_async(self.req_webrtc)

    def send_audio_request(self, percentage):
        self.req_audio.hostname = "192.168.80.3"
        self.req_audio.command = "audio"
        self.req_audio.audio_command = "set_volume"
        self.req_audio.verbose = False
        self.req_audio.percentage = percentage
        print("Send a percentage request")
        self.future_audio = self.client_audio.call_async(self.req_audio)

    def send_light_request(self, led_01, led_02, led_03, led_04):
        self.req_light.brightnesses_01 = led_01
        self.req_light.brightnesses_02 = led_02
        self.req_light.brightnesses_03 = led_03
        self.req_light.brightnesses_04 = led_04
        self.req_light.hostname = "192.168.80.3"
        self.req_light.command = "lighting"
        self.req_light.lighting_command = "set"
        self.req_light.verbose = "False"
        print("Send a light request")
        self.future_light = self.client_light.call_async(self.req_light)

    def send_camera_ptz_request(self, pan, tilt, zoom):
        self.req_camera_ptz.pan = pan
        self.req_camera_ptz.tilt = tilt
        self.req_camera_ptz.zoom = zoom
        self.req_camera_ptz.hostname = "192.168.80.3"
        self.req_camera_ptz.command = "ptz"
        self.req_camera_ptz.ptz_command = "set_position"
        self.req_camera_ptz.ptz_name = "mech"
        self.req_camera_ptz.verbose = "True"
        print("Send a cameraPTZ request")
        self.future_camera_ptz = self.client_camera_ptz.call_async(self.req_camera_ptz)

    def send_camera_request(self, name):
        self.req_camera.hostname = "192.168.80.3"
        self.req_camera.command = "media_log"
        self.req_camera.media_log_command = "store_retrieve"
        self.req_camera.camera_name = name
        self.req_camera.verbose = False
        self.req_camera.dst = "/root/ros2_ws/src/spot_cam_ros2/images/image" 
        self.req_camera.save_as_rgb24 = False
        self.req_camera.stitching = True
        self.req_camera.raw_ir = False
        print("Send a camera request")
        print(self.req_camera)
        self.future_camera = self.client_camera.call_async(self.req_camera)

    def send_compositor_request(self, name):
        self.req_compositor.hostname = "192.168.80.3"
        self.req_compositor.command = "compositor"
        self.req_compositor.compositor_command = "set"
        self.req_compositor.name = name
        self.req_compositor.verbose = True
        print("Send a compositor request")
        self.future_compositor = self.client_compositor.call_async(self.req_compositor)

    def timer_callback(self):
        
        print(">>>>>>>>>>>>")
        print(self.i)
        print(">>>>>>>>>>>>")
        print(f"Light: {self.busy_light}")
        print(f"Camera: {self.busy_camera}")
        print(f"Camera PTZ: {self.busy_cameraPTZ}")
        print(f"Compositor: {self.busy_compositor}")
        print(f"Audio: {self.busy_audio}")
        print(f"Webrtc: {self.busy_webrtc}")
        print("...........")
         
        # Light
        if self.i%10 == 0:
            led_01 = random.uniform(0,0.5)
            led_02 = random.uniform(0,0.5)
            led_03 = random.uniform(0,0.5)
            led_04 = random.uniform(0,0.5)
        else:
            led_01 = led_02 = led_03 = led_04 = 0.0
        if self.busy_light == 0:
            self.busy_light = 1
            self.send_light_request(led_01, led_02, led_03, led_04)

        # Camera PTZ
        if self.i%3 == 0 and  self.busy_cameraPTZ == 0:
            self.busy_cameraPTZ = 1
            self.tilt = random.uniform(-20.0,80.0)
            self.pan  = random.uniform(10.0,370.0)
            self.send_camera_ptz_request(self.pan,self.tilt,self.zoom)

        # Camera
        if self.i%20 == 0  and self.busy_camera == 0:
            self.busy_camera = 1
            self.send_camera_request("c0") # choose from 'c0', 'c1', 'c2', 'c3', 'ir', 'pano', 'ptz', 'ptz-ir', 'ptz-ir-color', 'ptz-ir-overlay'

        # Compositor
        if self.i%10 == 0 and  self.busy_compositor == 0:
            self.busy_compositor = 1
            rand_compositor = ['digi', 'digi_overlay', 'digi_full', 'c0', 'c1', 'c2', 'c3', 'c4', 'mech', 'mech_full', 'mech_overlay', 'mech_overlay_ir', 'mech_ir', 'mech_full_ir', 'pano_full']
            self.send_compositor_request(random.sample(rand_compositor,1)[0]) 

        # Record video
        if self.i%25 == 0 and  self.busy_webrtc == 0:
            self.busy_webrtc = 1
            self.send_webrtc_request(5, "record")

        # Audio
        if self.i%23 == 0 and  self.busy_audio == 0:
            self.busy_audio = 1
            self.send_audio_request(80)

        # Counter
        self.i += 1
 
    def run(self):
        while rclpy.ok():
            rclpy.spin_once(self)
            
            if self.busy_light == 1 and self.future_light.done():
                try:
                    response_light = self.future_light.result()
                except Exception as e:
                    self.get_logger().info(
                        'Service Light call failed %r' % (e,))
                else:
                    self.get_logger().info(
                        'Result of the light service: %s' % (response_light.result))
                    self.busy_light = 0

            if self.busy_cameraPTZ == 1  and self.future_camera_ptz.done():
                try:
                    response_camera_ptz = self.future_camera_ptz.result()
                except Exception as e:
                    self.get_logger().info(
                        'Service Camera PTZ call failed %r' % (e,))
                else:
                    self.get_logger().info(
                        'Result of the cameraPTZ service: %s' % (response_camera_ptz.result))
                    self.busy_cameraPTZ = 0
 
            if self.busy_camera == 1 and self.future_camera.done():
                try:
                    response_camera = self.future_camera.result()
                except Exception as e:
                    self.get_logger().info(
                        'Service Camera call failed %r' % (e,))
                else:
                    self.get_logger().info(
                        'Result of the camera service: %s' % (response_camera.result))
                    self.busy_camera = 0
            
            if self.busy_compositor == 1 and self.future_compositor.done():
                try:
                    response_compositor = self.future_compositor.result()
                except Exception as e:
                    self.get_logger().info(
                        'Service Compositor call failed %r' % (e,))
                else:
                    self.get_logger().info(
                        'Result of the compositor service: %s' % (response_compositor.result))
                    self.busy_compositor = 0

            if self.busy_audio == 1 and self.future_audio.done():
                try:
                    response_audio = self.future_audio.result()
                except Exception as e:
                    self.get_logger().info(
                        'Service Audio call failed %r' % (e,))
                else:
                    self.get_logger().info(
                        'Result of the audio service: %s' % (response_audio.result))
                    self.busy_audio = 0

            if self.busy_webrtc == 1 and self.future_webrtc.done():
                try:
                    response_webrtc = self.future_webrtc.result()
                except Exception as e:
                    self.get_logger().info(
                        'Service Webrtc call failed %r' % (e,))
                else:
                    self.get_logger().info(
                        'Result of the webrtc service: %s' % (response_webrtc.result))
                    self.busy_webrtc = 0

def main(args=None):
    rclpy.init(args=args)

    node = WrapperExample()
    node.run()

    # Destroy the node explicitly
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
