// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from create_message_types:srv/Light.idl
// generated code does not contain a copyright notice

#ifndef CREATE_MESSAGE_TYPES__SRV__DETAIL__LIGHT__STRUCT_HPP_
#define CREATE_MESSAGE_TYPES__SRV__DETAIL__LIGHT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__create_message_types__srv__Light_Request __attribute__((deprecated))
#else
# define DEPRECATED__create_message_types__srv__Light_Request __declspec(deprecated)
#endif

namespace create_message_types
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Light_Request_
{
  using Type = Light_Request_<ContainerAllocator>;

  explicit Light_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightnesses_01 = 0.0f;
      this->brightnesses_02 = 0.0f;
      this->brightnesses_03 = 0.0f;
      this->brightnesses_04 = 0.0f;
      this->command = "";
      this->hostname = "";
      this->lighting_command = "";
      this->verbose = "";
    }
  }

  explicit Light_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    hostname(_alloc),
    lighting_command(_alloc),
    verbose(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brightnesses_01 = 0.0f;
      this->brightnesses_02 = 0.0f;
      this->brightnesses_03 = 0.0f;
      this->brightnesses_04 = 0.0f;
      this->command = "";
      this->hostname = "";
      this->lighting_command = "";
      this->verbose = "";
    }
  }

  // field types and members
  using _brightnesses_01_type =
    float;
  _brightnesses_01_type brightnesses_01;
  using _brightnesses_02_type =
    float;
  _brightnesses_02_type brightnesses_02;
  using _brightnesses_03_type =
    float;
  _brightnesses_03_type brightnesses_03;
  using _brightnesses_04_type =
    float;
  _brightnesses_04_type brightnesses_04;
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _hostname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hostname_type hostname;
  using _lighting_command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lighting_command_type lighting_command;
  using _verbose_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _verbose_type verbose;

  // setters for named parameter idiom
  Type & set__brightnesses_01(
    const float & _arg)
  {
    this->brightnesses_01 = _arg;
    return *this;
  }
  Type & set__brightnesses_02(
    const float & _arg)
  {
    this->brightnesses_02 = _arg;
    return *this;
  }
  Type & set__brightnesses_03(
    const float & _arg)
  {
    this->brightnesses_03 = _arg;
    return *this;
  }
  Type & set__brightnesses_04(
    const float & _arg)
  {
    this->brightnesses_04 = _arg;
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
  Type & set__lighting_command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lighting_command = _arg;
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
    create_message_types::srv::Light_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const create_message_types::srv::Light_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create_message_types::srv::Light_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create_message_types::srv::Light_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create_message_types::srv::Light_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create_message_types::srv::Light_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create_message_types::srv::Light_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create_message_types::srv::Light_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create_message_types::srv::Light_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create_message_types::srv::Light_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create_message_types__srv__Light_Request
    std::shared_ptr<create_message_types::srv::Light_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create_message_types__srv__Light_Request
    std::shared_ptr<create_message_types::srv::Light_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Light_Request_ & other) const
  {
    if (this->brightnesses_01 != other.brightnesses_01) {
      return false;
    }
    if (this->brightnesses_02 != other.brightnesses_02) {
      return false;
    }
    if (this->brightnesses_03 != other.brightnesses_03) {
      return false;
    }
    if (this->brightnesses_04 != other.brightnesses_04) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->hostname != other.hostname) {
      return false;
    }
    if (this->lighting_command != other.lighting_command) {
      return false;
    }
    if (this->verbose != other.verbose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Light_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Light_Request_

// alias to use template instance with default allocator
using Light_Request =
  create_message_types::srv::Light_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace create_message_types


#ifndef _WIN32
# define DEPRECATED__create_message_types__srv__Light_Response __attribute__((deprecated))
#else
# define DEPRECATED__create_message_types__srv__Light_Response __declspec(deprecated)
#endif

namespace create_message_types
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Light_Response_
{
  using Type = Light_Response_<ContainerAllocator>;

  explicit Light_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit Light_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    create_message_types::srv::Light_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const create_message_types::srv::Light_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<create_message_types::srv::Light_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<create_message_types::srv::Light_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      create_message_types::srv::Light_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<create_message_types::srv::Light_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      create_message_types::srv::Light_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<create_message_types::srv::Light_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<create_message_types::srv::Light_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<create_message_types::srv::Light_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__create_message_types__srv__Light_Response
    std::shared_ptr<create_message_types::srv::Light_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__create_message_types__srv__Light_Response
    std::shared_ptr<create_message_types::srv::Light_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Light_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Light_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Light_Response_

// alias to use template instance with default allocator
using Light_Response =
  create_message_types::srv::Light_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace create_message_types

namespace create_message_types
{

namespace srv
{

struct Light
{
  using Request = create_message_types::srv::Light_Request;
  using Response = create_message_types::srv::Light_Response;
};

}  // namespace srv

}  // namespace create_message_types

#endif  // CREATE_MESSAGE_TYPES__SRV__DETAIL__LIGHT__STRUCT_HPP_
