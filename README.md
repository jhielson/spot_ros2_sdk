# SPOT: robot + payload 

# Work in progress

In this repository, you find a comprehensive package enabling seamless access to the robot's payload through ROS2 services.


# Message types

A couple of message types were created to handle the service requests:

Audio.srv
```
string hostname 
bool verbose
string command
string audio_command
int32 percentage
---
bool result
```

Camera.srv
```
string camera_name
string command
string hostname
string media_log_command
bool verbose
string dst
bool save_as_rgb24 
bool stitching
bool raw_ir
---
bool result
```

CameraPTZ.srv
```
string hostname
string command
string ptz_name
string ptz_command
float32 pan
float32 tilt
float32 zoom
string verbose
---
bool result
```

Compositor.srv
```
string hostname
bool verbose
string command
string compositor_command
string name
---
bool result
```

Light.srv
```
float32 brightnesses_01 
float32 brightnesses_02
float32 brightnesses_03
float32 brightnesses_04
string command
string hostname
string lighting_command
string verbose
---
bool result
```

Webrtc.srv
```
string hostname
bool verbose
string command 
string webrtc_command 
string track 
string sdp_filename 
string sdp_port
string cam_ssl_cert
string dst_prefix
int32 time
---
bool result
```

# A node was designed to run service requests exhaustively

