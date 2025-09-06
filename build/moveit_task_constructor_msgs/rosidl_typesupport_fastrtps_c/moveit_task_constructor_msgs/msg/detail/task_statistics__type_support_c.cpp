// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_task_constructor_msgs:msg/TaskStatistics.idl
// generated code does not contain a copyright notice
#include "moveit_task_constructor_msgs/msg/detail/task_statistics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_task_constructor_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_task_constructor_msgs/msg/detail/task_statistics__struct.h"
#include "moveit_task_constructor_msgs/msg/detail/task_statistics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "moveit_task_constructor_msgs/msg/detail/stage_statistics__functions.h"  // stages
#include "rosidl_runtime_c/string.h"  // task_id
#include "rosidl_runtime_c/string_functions.h"  // task_id

// forward declare type support functions

bool cdr_serialize_moveit_task_constructor_msgs__msg__StageStatistics(
  const moveit_task_constructor_msgs__msg__StageStatistics * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_moveit_task_constructor_msgs__msg__StageStatistics(
  eprosima::fastcdr::Cdr & cdr,
  moveit_task_constructor_msgs__msg__StageStatistics * ros_message);

size_t get_serialized_size_moveit_task_constructor_msgs__msg__StageStatistics(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_task_constructor_msgs__msg__StageStatistics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_moveit_task_constructor_msgs__msg__StageStatistics(
  const moveit_task_constructor_msgs__msg__StageStatistics * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_moveit_task_constructor_msgs__msg__StageStatistics(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_moveit_task_constructor_msgs__msg__StageStatistics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_task_constructor_msgs, msg, StageStatistics)();


using _TaskStatistics__ros_msg_type = moveit_task_constructor_msgs__msg__TaskStatistics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
bool cdr_serialize_moveit_task_constructor_msgs__msg__TaskStatistics(
  const moveit_task_constructor_msgs__msg__TaskStatistics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stages
  {
    size_t size = ros_message->stages.size;
    auto array_ptr = ros_message->stages.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_moveit_task_constructor_msgs__msg__StageStatistics(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
bool cdr_deserialize_moveit_task_constructor_msgs__msg__TaskStatistics(
  eprosima::fastcdr::Cdr & cdr,
  moveit_task_constructor_msgs__msg__TaskStatistics * ros_message)
{
  // Field name: task_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task_id.data) {
      rosidl_runtime_c__String__init(&ros_message->task_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->task_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task_id'\n");
      return false;
    }
  }

  // Field name: stages
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->stages.data) {
      moveit_task_constructor_msgs__msg__StageStatistics__Sequence__fini(&ros_message->stages);
    }
    if (!moveit_task_constructor_msgs__msg__StageStatistics__Sequence__init(&ros_message->stages, size)) {
      fprintf(stderr, "failed to create array for field 'stages'");
      return false;
    }
    auto array_ptr = ros_message->stages.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_moveit_task_constructor_msgs__msg__StageStatistics(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t get_serialized_size_moveit_task_constructor_msgs__msg__TaskStatistics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TaskStatistics__ros_msg_type * ros_message = static_cast<const _TaskStatistics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);

  // Field name: stages
  {
    size_t array_size = ros_message->stages.size;
    auto array_ptr = ros_message->stages.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_moveit_task_constructor_msgs__msg__StageStatistics(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t max_serialized_size_moveit_task_constructor_msgs__msg__TaskStatistics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: task_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: stages
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_task_constructor_msgs__msg__StageStatistics(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_task_constructor_msgs__msg__TaskStatistics;
    is_plain =
      (
      offsetof(DataType, stages) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
bool cdr_serialize_key_moveit_task_constructor_msgs__msg__TaskStatistics(
  const moveit_task_constructor_msgs__msg__TaskStatistics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: task_id
  {
    const rosidl_runtime_c__String * str = &ros_message->task_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: stages
  {
    size_t size = ros_message->stages.size;
    auto array_ptr = ros_message->stages.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_moveit_task_constructor_msgs__msg__StageStatistics(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t get_serialized_size_key_moveit_task_constructor_msgs__msg__TaskStatistics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TaskStatistics__ros_msg_type * ros_message = static_cast<const _TaskStatistics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: task_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task_id.size + 1);

  // Field name: stages
  {
    size_t array_size = ros_message->stages.size;
    auto array_ptr = ros_message->stages.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_moveit_task_constructor_msgs__msg__StageStatistics(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_task_constructor_msgs
size_t max_serialized_size_key_moveit_task_constructor_msgs__msg__TaskStatistics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: task_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: stages
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_moveit_task_constructor_msgs__msg__StageStatistics(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_task_constructor_msgs__msg__TaskStatistics;
    is_plain =
      (
      offsetof(DataType, stages) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TaskStatistics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const moveit_task_constructor_msgs__msg__TaskStatistics * ros_message = static_cast<const moveit_task_constructor_msgs__msg__TaskStatistics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_moveit_task_constructor_msgs__msg__TaskStatistics(ros_message, cdr);
}

static bool _TaskStatistics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  moveit_task_constructor_msgs__msg__TaskStatistics * ros_message = static_cast<moveit_task_constructor_msgs__msg__TaskStatistics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_moveit_task_constructor_msgs__msg__TaskStatistics(cdr, ros_message);
}

static uint32_t _TaskStatistics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_task_constructor_msgs__msg__TaskStatistics(
      untyped_ros_message, 0));
}

static size_t _TaskStatistics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_task_constructor_msgs__msg__TaskStatistics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TaskStatistics = {
  "moveit_task_constructor_msgs::msg",
  "TaskStatistics",
  _TaskStatistics__cdr_serialize,
  _TaskStatistics__cdr_deserialize,
  _TaskStatistics__get_serialized_size,
  _TaskStatistics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TaskStatistics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TaskStatistics,
  get_message_typesupport_handle_function,
  &moveit_task_constructor_msgs__msg__TaskStatistics__get_type_hash,
  &moveit_task_constructor_msgs__msg__TaskStatistics__get_type_description,
  &moveit_task_constructor_msgs__msg__TaskStatistics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_task_constructor_msgs, msg, TaskStatistics)() {
  return &_TaskStatistics__type_support;
}

#if defined(__cplusplus)
}
#endif
