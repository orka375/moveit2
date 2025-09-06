// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moveit_msgs:srv/RenameRobotStateInWarehouse.idl
// generated code does not contain a copyright notice

#include "moveit_msgs/srv/detail/rename_robot_state_in_warehouse__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__RenameRobotStateInWarehouse__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x2a, 0x23, 0xf6, 0x91, 0x18, 0xd7, 0x42,
      0x47, 0x1c, 0x19, 0xe8, 0xfb, 0x96, 0x20, 0x5c,
      0x7e, 0x7d, 0x9f, 0x59, 0x5a, 0x3e, 0xdf, 0x28,
      0xe5, 0x0e, 0x9d, 0xd0, 0x02, 0xd2, 0x7e, 0x22,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x34, 0x0b, 0x04, 0x33, 0x36, 0xf2, 0x54,
      0x3b, 0x69, 0x97, 0x65, 0xcf, 0x5a, 0x93, 0xd4,
      0xcc, 0x84, 0x3b, 0x08, 0x46, 0x9d, 0xa6, 0xda,
      0xf1, 0xf9, 0x22, 0x2a, 0x32, 0xc3, 0xa6, 0x05,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0x02, 0xed, 0xf0, 0xa5, 0x36, 0xc3, 0xbf,
      0x0c, 0x39, 0xfe, 0x35, 0x34, 0xb1, 0x03, 0xb4,
      0x98, 0x78, 0xe4, 0x6a, 0x75, 0x6a, 0x1c, 0x93,
      0xef, 0x69, 0x66, 0x13, 0xa7, 0x69, 0xa0, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__RenameRobotStateInWarehouse_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0xbf, 0x24, 0x6f, 0x75, 0x90, 0x15, 0x26,
      0xc9, 0xe9, 0x22, 0x99, 0x53, 0x7a, 0xa1, 0x7c,
      0xdf, 0x17, 0xdf, 0x3f, 0x95, 0xcc, 0x40, 0x0b,
      0x5b, 0x66, 0xe7, 0xcf, 0x99, 0x89, 0x6f, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char moveit_msgs__srv__RenameRobotStateInWarehouse__TYPE_NAME[] = "moveit_msgs/srv/RenameRobotStateInWarehouse";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char moveit_msgs__srv__RenameRobotStateInWarehouse_Event__TYPE_NAME[] = "moveit_msgs/srv/RenameRobotStateInWarehouse_Event";
static char moveit_msgs__srv__RenameRobotStateInWarehouse_Request__TYPE_NAME[] = "moveit_msgs/srv/RenameRobotStateInWarehouse_Request";
static char moveit_msgs__srv__RenameRobotStateInWarehouse_Response__TYPE_NAME[] = "moveit_msgs/srv/RenameRobotStateInWarehouse_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char moveit_msgs__srv__RenameRobotStateInWarehouse__FIELD_NAME__request_message[] = "request_message";
static char moveit_msgs__srv__RenameRobotStateInWarehouse__FIELD_NAME__response_message[] = "response_message";
static char moveit_msgs__srv__RenameRobotStateInWarehouse__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__RenameRobotStateInWarehouse__FIELDS[] = {
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__RenameRobotStateInWarehouse__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__RenameRobotStateInWarehouse__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__RenameRobotStateInWarehouse__TYPE_NAME, 43, 43},
      {moveit_msgs__srv__RenameRobotStateInWarehouse__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__RenameRobotStateInWarehouse__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = moveit_msgs__srv__RenameRobotStateInWarehouse_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = moveit_msgs__srv__RenameRobotStateInWarehouse_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = moveit_msgs__srv__RenameRobotStateInWarehouse_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__RenameRobotStateInWarehouse_Request__FIELD_NAME__old_name[] = "old_name";
static char moveit_msgs__srv__RenameRobotStateInWarehouse_Request__FIELD_NAME__new_name[] = "new_name";
static char moveit_msgs__srv__RenameRobotStateInWarehouse_Request__FIELD_NAME__robot[] = "robot";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__RenameRobotStateInWarehouse_Request__FIELDS[] = {
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Request__FIELD_NAME__old_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Request__FIELD_NAME__new_name, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Request__FIELD_NAME__robot, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Request__TYPE_NAME, 51, 51},
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__RenameRobotStateInWarehouse_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__RenameRobotStateInWarehouse_Response__FIELDS[] = {
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Response__TYPE_NAME, 52, 52},
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__RenameRobotStateInWarehouse_Event__FIELD_NAME__info[] = "info";
static char moveit_msgs__srv__RenameRobotStateInWarehouse_Event__FIELD_NAME__request[] = "request";
static char moveit_msgs__srv__RenameRobotStateInWarehouse_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__RenameRobotStateInWarehouse_Event__FIELDS[] = {
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__RenameRobotStateInWarehouse_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__RenameRobotStateInWarehouse_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Event__TYPE_NAME, 49, 49},
      {moveit_msgs__srv__RenameRobotStateInWarehouse_Event__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = moveit_msgs__srv__RenameRobotStateInWarehouse_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = moveit_msgs__srv__RenameRobotStateInWarehouse_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string old_name\n"
  "string new_name\n"
  "string robot\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__RenameRobotStateInWarehouse__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__RenameRobotStateInWarehouse__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__RenameRobotStateInWarehouse_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__RenameRobotStateInWarehouse_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__RenameRobotStateInWarehouse__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__RenameRobotStateInWarehouse__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *moveit_msgs__srv__RenameRobotStateInWarehouse_Event__get_individual_type_description_source(NULL);
    sources[3] = *moveit_msgs__srv__RenameRobotStateInWarehouse_Request__get_individual_type_description_source(NULL);
    sources[4] = *moveit_msgs__srv__RenameRobotStateInWarehouse_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__RenameRobotStateInWarehouse_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__RenameRobotStateInWarehouse_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__RenameRobotStateInWarehouse_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__RenameRobotStateInWarehouse_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__RenameRobotStateInWarehouse_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__RenameRobotStateInWarehouse_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *moveit_msgs__srv__RenameRobotStateInWarehouse_Request__get_individual_type_description_source(NULL);
    sources[3] = *moveit_msgs__srv__RenameRobotStateInWarehouse_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
