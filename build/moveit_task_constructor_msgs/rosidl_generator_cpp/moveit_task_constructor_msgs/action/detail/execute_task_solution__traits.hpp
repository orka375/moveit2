// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_task_constructor_msgs:action/ExecuteTaskSolution.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "moveit_task_constructor_msgs/action/execute_task_solution.hpp"


#ifndef MOVEIT_TASK_CONSTRUCTOR_MSGS__ACTION__DETAIL__EXECUTE_TASK_SOLUTION__TRAITS_HPP_
#define MOVEIT_TASK_CONSTRUCTOR_MSGS__ACTION__DETAIL__EXECUTE_TASK_SOLUTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "moveit_task_constructor_msgs/action/detail/execute_task_solution__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'solution'
#include "moveit_task_constructor_msgs/msg/detail/solution__traits.hpp"

namespace moveit_task_constructor_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTaskSolution_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: solution
  {
    out << "solution: ";
    to_flow_style_yaml(msg.solution, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTaskSolution_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution:\n";
    to_block_style_yaml(msg.solution, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTaskSolution_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_task_constructor_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Goal>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_Goal";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Goal>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_Goal";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Goal>
  : std::integral_constant<bool, has_fixed_size<moveit_task_constructor_msgs::msg::Solution>::value> {};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Goal>
  : std::integral_constant<bool, has_bounded_size<moveit_task_constructor_msgs::msg::Solution>::value> {};

template<>
struct is_message<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__traits.hpp"

namespace moveit_task_constructor_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTaskSolution_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_code
  {
    out << "error_code: ";
    to_flow_style_yaml(msg.error_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTaskSolution_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code:\n";
    to_block_style_yaml(msg.error_code, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTaskSolution_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_task_constructor_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Result>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_Result";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Result>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_Result";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Result>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>::value> {};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Result>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>::value> {};

template<>
struct is_message<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace moveit_task_constructor_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTaskSolution_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: sub_id
  {
    out << "sub_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_id, out);
    out << ", ";
  }

  // member: sub_no
  {
    out << "sub_no: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_no, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTaskSolution_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sub_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_id, out);
    out << "\n";
  }

  // member: sub_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_no: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_no, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTaskSolution_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_task_constructor_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Feedback>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_Feedback";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Feedback>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_Feedback";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "moveit_task_constructor_msgs/action/detail/execute_task_solution__traits.hpp"

namespace moveit_task_constructor_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTaskSolution_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTaskSolution_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTaskSolution_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_task_constructor_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Request>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Request";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Request>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_SendGoal_Request";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace moveit_task_constructor_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTaskSolution_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTaskSolution_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTaskSolution_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_task_constructor_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Response>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Response";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Response>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_SendGoal_Response";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace moveit_task_constructor_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTaskSolution_SendGoal_Event & msg,
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
  const ExecuteTaskSolution_SendGoal_Event & msg,
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

inline std::string to_yaml(const ExecuteTaskSolution_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_task_constructor_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Event>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Event";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Event>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_SendGoal_Event";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Request>::value && has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_SendGoal";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Request>::value &&
    has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Request>::value &&
    has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_task_constructor_msgs::action::ExecuteTaskSolution_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace moveit_task_constructor_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTaskSolution_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTaskSolution_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTaskSolution_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_task_constructor_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Request>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Request";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Request>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_GetResult_Request";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_task_constructor_msgs/action/detail/execute_task_solution__traits.hpp"

namespace moveit_task_constructor_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTaskSolution_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTaskSolution_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTaskSolution_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_task_constructor_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Response>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Response";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Response>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_GetResult_Response";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Result>::value> {};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Result>::value> {};

template<>
struct is_message<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace moveit_task_constructor_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTaskSolution_GetResult_Event & msg,
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
  const ExecuteTaskSolution_GetResult_Event & msg,
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

inline std::string to_yaml(const ExecuteTaskSolution_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_task_constructor_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Event>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Event";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Event>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_GetResult_Event";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Request>::value && has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_GetResult";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Request>::value &&
    has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Request>::value &&
    has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Response>::value
  >
{
};

template<>
struct is_service<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<moveit_task_constructor_msgs::action::ExecuteTaskSolution_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "moveit_task_constructor_msgs/action/detail/execute_task_solution__traits.hpp"

namespace moveit_task_constructor_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteTaskSolution_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteTaskSolution_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteTaskSolution_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace moveit_task_constructor_msgs

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution_FeedbackMessage>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution_FeedbackMessage";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution_FeedbackMessage>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution_FeedbackMessage";
}

template<>
struct has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<moveit_task_constructor_msgs::action::ExecuteTaskSolution_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_task_constructor_msgs::action::ExecuteTaskSolution>()
{
  return "moveit_task_constructor_msgs::action::ExecuteTaskSolution";
}

template<>
inline const char * name<moveit_task_constructor_msgs::action::ExecuteTaskSolution>()
{
  return "moveit_task_constructor_msgs/action/ExecuteTaskSolution";
}

template<>
struct is_action<moveit_task_constructor_msgs::action::ExecuteTaskSolution>
  : std::true_type
{
};

template<>
struct is_action_goal<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<moveit_task_constructor_msgs::action::ExecuteTaskSolution_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // MOVEIT_TASK_CONSTRUCTOR_MSGS__ACTION__DETAIL__EXECUTE_TASK_SOLUTION__TRAITS_HPP_
