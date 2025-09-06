// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from moveit_msgs:srv/DeleteRobotStateFromWarehouse.idl
// generated code does not contain a copyright notice

#include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0x32, 0xa0, 0x6d, 0x4f, 0xfa, 0x87, 0x40,
      0xf3, 0x55, 0x55, 0x65, 0x42, 0xfd, 0x73, 0xd1,
      0x46, 0xcb, 0x80, 0xff, 0x35, 0xd9, 0xc9, 0x52,
      0x9d, 0x06, 0x20, 0xe6, 0x36, 0xbb, 0x47, 0xa7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0x25, 0xe6, 0x6b, 0xf1, 0x11, 0x4c, 0xa4,
      0x1b, 0xb2, 0x1e, 0xd9, 0x84, 0xf5, 0x67, 0x5c,
      0xee, 0xe5, 0x79, 0x06, 0xdc, 0xa4, 0x98, 0x26,
      0xd2, 0xa9, 0xf5, 0x11, 0x23, 0x7b, 0x55, 0x4f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x40, 0xe2, 0xe9, 0x3e, 0xf4, 0xb7, 0x8c, 0x92,
      0x97, 0xa8, 0xca, 0x75, 0x33, 0xbf, 0x88, 0x96,
      0x62, 0x1a, 0x0d, 0x4a, 0xa4, 0xc9, 0x59, 0xb2,
      0x40, 0xca, 0x89, 0x62, 0xcf, 0x6a, 0x81, 0xc1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
const rosidl_type_hash_t *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0x6c, 0x89, 0x0f, 0x5f, 0x36, 0xb0, 0xe7,
      0xbf, 0x37, 0x13, 0x28, 0x62, 0x2f, 0xc2, 0xd5,
      0x7b, 0xda, 0x8c, 0xd2, 0x6c, 0xd3, 0xab, 0x1b,
      0xeb, 0x3a, 0xd6, 0xcf, 0x1e, 0xd2, 0xeb, 0xc0,
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

static char moveit_msgs__srv__DeleteRobotStateFromWarehouse__TYPE_NAME[] = "moveit_msgs/srv/DeleteRobotStateFromWarehouse";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__TYPE_NAME[] = "moveit_msgs/srv/DeleteRobotStateFromWarehouse_Event";
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__TYPE_NAME[] = "moveit_msgs/srv/DeleteRobotStateFromWarehouse_Request";
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__TYPE_NAME[] = "moveit_msgs/srv/DeleteRobotStateFromWarehouse_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse__FIELD_NAME__request_message[] = "request_message";
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse__FIELD_NAME__response_message[] = "response_message";
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__DeleteRobotStateFromWarehouse__FIELDS[] = {
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__DeleteRobotStateFromWarehouse__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse__TYPE_NAME, 45, 45},
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__FIELD_NAME__name[] = "name";
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__FIELD_NAME__robot[] = "robot";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__FIELDS[] = {
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__FIELD_NAME__robot, 5, 5},
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
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__TYPE_NAME, 53, 53},
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__FIELDS[] = {
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__TYPE_NAME, 54, 54},
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__FIELD_NAME__info[] = "info";
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__FIELD_NAME__request[] = "request";
static char moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__FIELDS[] = {
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__TYPE_NAME, 54, 54},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__TYPE_NAME, 54, 54},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__TYPE_NAME, 51, 51},
      {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__FIELDS, 3, 3},
    },
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "string robot\n"
  "\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse__TYPE_NAME, 45, 45},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 30, 30},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__TYPE_NAME, 54, 54},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__DeleteRobotStateFromWarehouse__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_individual_type_description_source(NULL);
    sources[3] = *moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_individual_type_description_source(NULL);
    sources[4] = *moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *moveit_msgs__srv__DeleteRobotStateFromWarehouse_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__get_individual_type_description_source(NULL);
    sources[3] = *moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
