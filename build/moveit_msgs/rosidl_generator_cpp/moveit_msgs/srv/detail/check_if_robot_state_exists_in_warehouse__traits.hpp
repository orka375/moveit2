// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/CheckIfRobotStateExistsInWarehouse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "moveit_msgs/srv/check_if_robot_state_exists_in_warehouse.hpp"


#ifndef MOVEIT_MSGS__SRV__DETAIL__CHECK_IF_ROBOT_STATE_EXISTS_IN_WAREHOUSE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__CHECK_IF_ROBOT_STATE_EXISTS_IN_WAREHOUSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/check_if_robot_state_exists_in_warehouse__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckIfRobotStateExistsInWarehouse_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: robot
  {
    out << "robot: ";
    rosidl_generator_traits::value_to_yaml(msg.robot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckIfRobotStateExistsInWarehouse_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot: ";
    rosidl_generator_traits::value_to_yaml(msg.robot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckIfRobotStateExistsInWarehouse_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>()
{
  return "moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request";
}

template<>
inline const char * name<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>()
{
  return "moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckIfRobotStateExistsInWarehouse_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: exists
  {
    out << "exists: ";
    rosidl_generator_traits::value_to_yaml(msg.exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckIfRobotStateExistsInWarehouse_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exists: ";
    rosidl_generator_traits::value_to_yaml(msg.exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckIfRobotStateExistsInWarehouse_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>()
{
  return "moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response";
}

template<>
inline const char * name<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>()
{
  return "moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckIfRobotStateExistsInWarehouse_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckIfRobotStateExistsInWarehouse_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckIfRobotStateExistsInWarehouse_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event>()
{
  return "moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event";
}

template<>
inline const char * name<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event>()
{
  return "moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse_Event";
}

template<>
struct has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>::value && has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse>()
{
  return "moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse";
}

template<>
inline const char * name<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse>()
{
  return "moveit_msgs/srv/CheckIfRobotStateExistsInWarehouse";
}

template<>
struct has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>::value &&
    has_fixed_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>::value &&
    has_bounded_size<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::CheckIfRobotStateExistsInWarehouse_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__CHECK_IF_ROBOT_STATE_EXISTS_IN_WAREHOUSE__TRAITS_HPP_
