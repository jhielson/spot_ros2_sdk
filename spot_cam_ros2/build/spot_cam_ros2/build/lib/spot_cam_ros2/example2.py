import rclpy
from rclpy.node import Node

class Example(Node):
    def __init__(self):
        super().__init__("my_node_name")
        self.get_logger().info("This node just says 'Hello' 2 ")

def main(args=None):
    rclpy.init(args=args)
    node = Example()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
