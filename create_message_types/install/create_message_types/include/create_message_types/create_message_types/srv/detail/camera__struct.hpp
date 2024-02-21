// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from create_message_types:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__STRUCT_HPP_
#define CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__create_message_types__srv__Camera_Request __attribute__((deprecated))
#else
# define DEPRECATED__create_message_types__srv__Camera_Request __declspec(deprecated)
#endif

namespace create_message_types
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Camera_Request_
{
  using Type = Camera_Request_<ContainerAllocator>;

  explicit Camera_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_name = "";
      this->command = "";
      this->hostname = "";
      this->media_log_command = "";
      this->verbose = "";
    }
  }

  explicit Camera_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_name(_alloc),
    command(_alloc),
    hostname(_alloc),
    media_log_command(_alloc),
    verbose(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_name = "";
      this->command = "";
      this->hostname = "";
      this->media_log_command = "";
      this->verbose = "";
    }
  }

  // field types and members
  using _camera_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_name_type camera_name;
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _hostname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hostname_type hostname;
  using _media_log_command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _media_log_command_type media_log_command;
  using _verbose_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _verbose_type verbose;

  // setters for named parameter idiom
  Type & set__camera_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_name = _arg;
    return *this;
  }
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__hostname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hostname = _arg;
    return *this;
  }
  Type & set__media_log_command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->media_log_command = _arg;
    return *this;
  }
  Type & set__verbose(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->verbose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    create_message_types::srv::Camera_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const create_message_types::srv::Camera_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create_message_types::srv::Camera_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create_message_types::srv::Camera_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create_message_types::srv::Camera_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create_message_types::srv::Camera_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create_message_types::srv::Camera_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create_message_types::srv::Camera_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create_message_types::srv::Camera_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create_message_types::srv::Camera_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create_message_types__srv__Camera_Request
    std::shared_ptr<create_message_types::srv::Camera_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create_message_types__srv__Camera_Request
    std::shared_ptr<create_message_types::srv::Camera_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_Request_ & other) const
  {
    if (this->camera_name != other.camera_name) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->hostname != other.hostname) {
      return false;
    }
    if (this->media_log_command != other.media_log_command) {
      return false;
    }
    if (this->verbose != other.verbose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Camera_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Camera_Request_

// alias to use template instance with default allocator
using Camera_Request =
  create_message_types::srv::Camera_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace create_message_types


#ifndef _WIN32
# define DEPRECATED__create_message_types__srv__Camera_Response __attribute__((deprecated))
#else
# define DEPRECATED__create_message_types__srv__Camera_Response __declspec(deprecated)
#endif

namespace create_message_types
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Camera_Response_
{
  using Type = Camera_Response_<ContainerAllocator>;

  explicit Camera_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit Camera_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    create_message_types::srv::Camera_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const create_message_types::srv::Camera_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create_message_types::srv::Camera_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create_message_types::srv::Camera_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create_message_types::srv::Camera_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create_message_types::srv::Camera_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create_message_types::srv::Camera_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create_message_types::srv::Camera_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create_message_types::srv::Camera_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create_message_types::srv::Camera_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create_message_types__srv__Camera_Response
    std::shared_ptr<create_message_types::srv::Camera_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create_message_types__srv__Camera_Response
    std::shared_ptr<create_message_types::srv::Camera_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Camera_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Camera_Response_

// alias to use template instance with default allocator
using Camera_Response =
  create_message_types::srv::Camera_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace create_message_types

namespace create_message_types
{

namespace srv
{

struct Camera
{
  using Request = create_message_types::srv::Camera_Request;
  using Response = create_message_types::srv::Camera_Response;
};

}  // namespace srv

}  // namespace create_message_types

#endif  // CREATE_MESSAGE_TYPES__SRV__DETAIL__CAMERA__STRUCT_HPP_
