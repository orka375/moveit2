// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetMultiStateValidity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "moveit_msgs/srv/get_multi_state_validity.hpp"


#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_MULTI_STATE_VALIDITY__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_MULTI_STATE_VALIDITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_msgs/srv/detail/get_multi_state_validity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__traits.hpp"
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__traits.hpp"
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMultiStateValidity_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_state
  {
    out << "robot_state: ";
    to_flow_style_yaml(msg.robot_state, out);
    out << ", ";
  }

  // member: joint_states
  {
    if (msg.joint_states.size() == 0) {
      out << "joint_states: []";
    } else {
      out << "joint_states: [";
      size_t pending_items = msg.joint_states.size();
      for (auto item : msg.joint_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: group_name
  {
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << ", ";
  }

  // member: constraints
  {
    out << "constraints: ";
    to_flow_style_yaml(msg.constraints, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMultiStateValidity_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_state:\n";
    to_block_style_yaml(msg.robot_state, out, indentation + 2);
  }

  // member: joint_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_states.size() == 0) {
      out << "joint_states: []\n";
    } else {
      out << "joint_states:\n";
      for (auto item : msg.joint_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: group_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_name: ";
    rosidl_generator_traits::value_to_yaml(msg.group_name, out);
    out << "\n";
  }

  // member: constraints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "constraints:\n";
    to_block_style_yaml(msg.constraints, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMultiStateValidity_Request & msg, bool use_flow_style = false)
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
inline const char * data_type<moveit_msgs::srv::GetMultiStateValidity_Request>()
{
  return "moveit_msgs::srv::GetMultiStateValidity_Request";
}

template<>
inline const char * name<moveit_msgs::srv::GetMultiStateValidity_Request>()
{
  return "moveit_msgs/srv/GetMultiStateValidity_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMultiStateValidity_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMultiStateValidity_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetMultiStateValidity_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'contacts'
#include "moveit_msgs/msg/detail/contact_information__traits.hpp"
// Member 'cost_sources'
#include "moveit_msgs/msg/detail/cost_source__traits.hpp"
// Member 'constraint_result'
#include "moveit_msgs/msg/detail/constraint_eval_result__traits.hpp"

namespace moveit_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMultiStateValidity_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: contacts
  {
    if (msg.contacts.size() == 0) {
      out << "contacts: []";
    } else {
      out << "contacts: [";
      size_t pending_items = msg.contacts.size();
      for (auto item : msg.contacts) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cost_sources
  {
    if (msg.cost_sources.size() == 0) {
      out << "cost_sources: []";
    } else {
      out << "cost_sources: [";
      size_t pending_items = msg.cost_sources.size();
      for (auto item : msg.cost_sources) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: constraint_result
  {
    if (msg.constraint_result.size() == 0) {
      out << "constraint_result: []";
    } else {
      out << "constraint_result: [";
      size_t pending_items = msg.constraint_result.size();
      for (auto item : msg.constraint_result) {
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
  const GetMultiStateValidity_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: contacts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contacts.size() == 0) {
      out << "contacts: []\n";
    } else {
      out << "contacts:\n";
      for (auto item : msg.contacts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cost_sources
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cost_sources.size() == 0) {
      out << "cost_sources: []\n";
    } else {
      out << "cost_sources:\n";
      for (auto item : msg.cost_sources) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: constraint_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constraint_result.size() == 0) {
      out << "constraint_result: []\n";
    } else {
      out << "constraint_result:\n";
      for (auto item : msg.constraint_result) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMultiStateValidity_Response & msg, bool use_flow_style = false)
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
inline const char * data_type<moveit_msgs::srv::GetMultiStateValidity_Response>()
{
  return "moveit_msgs::srv::GetMultiStateValidity_Response";
}

template<>
inline const char * name<moveit_msgs::srv::GetMultiStateValidity_Response>()
{
  return "moveit_msgs/srv/GetMultiStateValidity_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMultiStateValidity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMultiStateValidity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<moveit_msgs::srv::GetMultiStateValidity_Response>
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
  const GetMultiStateValidity_Event & msg,
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
  const GetMultiStateValidity_Event & msg,
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

inline std::string to_yaml(const GetMultiStateValidity_Event & msg, bool use_flow_style = false)
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
inline const char * data_type<moveit_msgs::srv::GetMultiStateValidity_Event>()
{
  return "moveit_msgs::srv::GetMultiStateValidity_Event";
}

template<>
inline const char * name<moveit_msgs::srv::GetMultiStateValidity_Event>()
{
  return "moveit_msgs/srv/GetMultiStateValidity_Event";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMultiStateValidity_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMultiStateValidity_Event>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::srv::GetMultiStateValidity_Request>::value && has_bounded_size<moveit_msgs::srv::GetMultiStateValidity_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<moveit_msgs::srv::GetMultiStateValidity_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetMultiStateValidity>()
{
  return "moveit_msgs::srv::GetMultiStateValidity";
}

template<>
inline const char * name<moveit_msgs::srv::GetMultiStateValidity>()
{
  return "moveit_msgs/srv/GetMultiStateValidity";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMultiStateValidity>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetMultiStateValidity_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetMultiStateValidity_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMultiStateValidity>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetMultiStateValidity_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetMultiStateValidity_Response>::value
  >
{
};

template<>
struct is_service<moveit_msgs::srv::GetMultiStateValidity>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_msgs::srv::GetMultiStateValidity_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_msgs::srv::GetMultiStateValidity_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_MULTI_STATE_VALIDITY__TRAITS_HPP_
