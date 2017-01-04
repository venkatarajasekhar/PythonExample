#define __AMLCODE_H__
#define AML_NULL_CHAR               (u16) 0x00
#define AML_ZERO_OP                 (u16) 0x00
#define AML_ONE_OP                  (u16) 0x01
#define AML_UNASSIGNED              (u16) 0x02
#define AML_ALIAS_OP                (u16) 0x06
#define AML_NAME_OP                 (u16) 0x08
#define AML_BYTE_OP                 (u16) 0x0a
#define AML_WORD_OP                 (u16) 0x0b
#define AML_DWORD_OP                (u16) 0x0c
#define AML_STRING_OP               (u16) 0x0d
#define AML_QWORD_OP                (u16) 0x0e
#define AML_SCOPE_OP                (u16) 0x10
#define AML_BUFFER_OP               (u16) 0x11
#define AML_PACKAGE_OP              (u16) 0x12
#define AML_VAR_PACKAGE_OP          (u16) 0x13
#define AML_METHOD_OP               (u16) 0x14
#define AML_DUAL_NAME_PREFIX        (u16) 0x2e
#define AML_MULTI_NAME_PREFIX_OP    (u16) 0x2f
#define AML_NAME_CHAR_SUBSEQ        (u16) 0x30
#define AML_NAME_CHAR_FIRST         (u16) 0x41
#define AML_EXTENDED_OP_PREFIX      (u16) 0x5b
#define AML_ROOT_PREFIX             (u16) 0x5c
#define AML_PARENT_PREFIX           (u16) 0x5e
#define AML_LOCAL_OP                (u16) 0x60
#define AML_LOCAL0                  (u16) 0x60
#define AML_LOCAL1                  (u16) 0x61
#define AML_LOCAL2                  (u16) 0x62
#define AML_LOCAL3                  (u16) 0x63
#define AML_LOCAL4                  (u16) 0x64
#define AML_LOCAL5                  (u16) 0x65
#define AML_LOCAL6                  (u16) 0x66
#define AML_LOCAL7                  (u16) 0x67
#define AML_ARG_OP                  (u16) 0x68
#define AML_ARG0                    (u16) 0x68
#define AML_ARG1                    (u16) 0x69
#define AML_ARG2                    (u16) 0x6a
#define AML_ARG3                    (u16) 0x6b
#define AML_ARG4                    (u16) 0x6c
#define AML_ARG5                    (u16) 0x6d
#define AML_ARG6                    (u16) 0x6e
#define AML_STORE_OP                (u16) 0x70
#define AML_REF_OF_OP               (u16) 0x71
#define AML_ADD_OP                  (u16) 0x72
#define AML_CONCAT_OP               (u16) 0x73
#define AML_SUBTRACT_OP             (u16) 0x74
#define AML_INCREMENT_OP            (u16) 0x75
#define AML_DECREMENT_OP            (u16) 0x76
#define AML_MULTIPLY_OP             (u16) 0x77
#define AML_DIVIDE_OP               (u16) 0x78
#define AML_SHIFT_LEFT_OP           (u16) 0x79
#define AML_SHIFT_RIGHT_OP          (u16) 0x7a
#define AML_BIT_AND_OP              (u16) 0x7b
#define AML_BIT_NAND_OP             (u16) 0x7c
#define AML_BIT_OR_OP               (u16) 0x7d
#define AML_BIT_NOR_OP              (u16) 0x7e
#define AML_BIT_XOR_OP              (u16) 0x7f
#define AML_BIT_NOT_OP              (u16) 0x80
#define AML_FIND_SET_LEFT_BIT_OP    (u16) 0x81
#define AML_FIND_SET_RIGHT_BIT_OP   (u16) 0x82
#define AML_DEREF_OF_OP             (u16) 0x83
#define AML_CONCAT_RES_OP           (u16) 0x84
#define AML_MOD_OP                  (u16) 0x85
#define AML_NOTIFY_OP               (u16) 0x86
#define AML_SIZE_OF_OP              (u16) 0x87
#define AML_INDEX_OP                (u16) 0x88
#define AML_MATCH_OP                (u16) 0x89
#define AML_CREATE_DWORD_FIELD_OP   (u16) 0x8a
#define AML_CREATE_WORD_FIELD_OP    (u16) 0x8b
#define AML_CREATE_BYTE_FIELD_OP    (u16) 0x8c
#define AML_CREATE_BIT_FIELD_OP     (u16) 0x8d
#define AML_TYPE_OP                 (u16) 0x8e
#define AML_CREATE_QWORD_FIELD_OP   (u16) 0x8f
#define AML_LAND_OP                 (u16) 0x90
#define AML_LOR_OP                  (u16) 0x91
#define AML_LNOT_OP                 (u16) 0x92
#define AML_LEQUAL_OP               (u16) 0x93
#define AML_LGREATER_OP             (u16) 0x94
#define AML_LLESS_OP                (u16) 0x95
#define AML_TO_BUFFER_OP            (u16) 0x96
#define AML_TO_DECSTRING_OP         (u16) 0x97
#define AML_TO_HEXSTRING_OP         (u16) 0x98
#define AML_TO_INTEGER_OP           (u16) 0x99
#define AML_TO_STRING_OP            (u16) 0x9c
#define AML_COPY_OP                 (u16) 0x9d
#define AML_MID_OP                  (u16) 0x9e
#define AML_CONTINUE_OP             (u16) 0x9f
#define AML_IF_OP                   (u16) 0xa0
#define AML_ELSE_OP                 (u16) 0xa1
#define AML_WHILE_OP                (u16) 0xa2
#define AML_NOOP_OP                 (u16) 0xa3
#define AML_RETURN_OP               (u16) 0xa4
#define AML_BREAK_OP                (u16) 0xa5
#define AML_BREAK_POINT_OP          (u16) 0xcc
#define AML_ONES_OP                 (u16) 0xff
#define AML_EXTENDED_OPCODE         (u16) 0x5b00
#define AML_MUTEX_OP                (u16) 0x5b01
#define AML_EVENT_OP                (u16) 0x5b02
#define AML_SHIFT_RIGHT_BIT_OP      (u16) 0x5b10
#define AML_SHIFT_LEFT_BIT_OP       (u16) 0x5b11
#define AML_COND_REF_OF_OP          (u16) 0x5b12
#define AML_CREATE_FIELD_OP         (u16) 0x5b13
#define AML_LOAD_TABLE_OP           (u16) 0x5b1f
#define AML_LOAD_OP                 (u16) 0x5b20
#define AML_STALL_OP                (u16) 0x5b21
#define AML_SLEEP_OP                (u16) 0x5b22
#define AML_ACQUIRE_OP              (u16) 0x5b23
#define AML_SIGNAL_OP               (u16) 0x5b24
#define AML_WAIT_OP                 (u16) 0x5b25
#define AML_RESET_OP                (u16) 0x5b26
#define AML_RELEASE_OP              (u16) 0x5b27
#define AML_FROM_BCD_OP             (u16) 0x5b28
#define AML_TO_BCD_OP               (u16) 0x5b29
#define AML_UNLOAD_OP               (u16) 0x5b2a
#define AML_REVISION_OP             (u16) 0x5b30
#define AML_DEBUG_OP                (u16) 0x5b31
#define AML_FATAL_OP                (u16) 0x5b32
#define AML_TIMER_OP                (u16) 0x5b33
#define AML_REGION_OP               (u16) 0x5b80
#define AML_FIELD_OP                (u16) 0x5b81
#define AML_DEVICE_OP               (u16) 0x5b82
#define AML_PROCESSOR_OP            (u16) 0x5b83
#define AML_POWER_RES_OP            (u16) 0x5b84
#define AML_THERMAL_ZONE_OP         (u16) 0x5b85
#define AML_INDEX_FIELD_OP          (u16) 0x5b86
#define AML_BANK_FIELD_OP           (u16) 0x5b87
#define AML_DATA_REGION_OP          (u16) 0x5b88
#define AML_LGREATEREQUAL_OP        (u16) 0x9295
#define AML_LLESSEQUAL_OP           (u16) 0x9294
#define AML_LNOTEQUAL_OP            (u16) 0x9293
#define AML_INT_NAMEPATH_OP         (u16) 0x002d
#define AML_INT_NAMEDFIELD_OP       (u16) 0x0030
#define AML_INT_RESERVEDFIELD_OP    (u16) 0x0031
#define AML_INT_ACCESSFIELD_OP      (u16) 0x0032
#define AML_INT_BYTELIST_OP         (u16) 0x0033
#define AML_INT_STATICSTRING_OP     (u16) 0x0034
#define AML_INT_METHODCALL_OP       (u16) 0x0035
#define AML_INT_RETURN_VALUE_OP     (u16) 0x0036
#define AML_INT_EVAL_SUBTREE_OP     (u16) 0x0037
#define ARG_NONE                    0x0
#define ARGP_BYTEDATA               0x01
#define ARGP_BYTELIST               0x02
#define ARGP_CHARLIST               0x03
#define ARGP_DATAOBJ                0x04
#define ARGP_DATAOBJLIST            0x05
#define ARGP_DWORDDATA              0x06
#define ARGP_FIELDLIST              0x07
#define ARGP_NAME                   0x08
#define ARGP_NAMESTRING             0x09
#define ARGP_OBJLIST                0x0A
#define ARGP_PKGLENGTH              0x0B
#define ARGP_SUPERNAME              0x0C
#define ARGP_TARGET                 0x0D
#define ARGP_TERMARG                0x0E
#define ARGP_TERMLIST               0x0F
#define ARGP_WORDDATA               0x10
#define ARGP_QWORDDATA              0x11
#define ARGP_SIMPLENAME             0x12
#define ARGI_ANYTYPE                0x01
#define ARGI_PACKAGE                0x02
#define ARGI_EVENT                  0x03
#define ARGI_MUTEX                  0x04
#define ARGI_DDBHANDLE              0x05
#define ARGI_INTEGER                0x06
#define ARGI_STRING                 0x07
#define ARGI_BUFFER                 0x08
#define ARGI_BUFFER_OR_STRING       0x09
#define ARGI_COMPUTEDATA            0x0A
#define ARGI_INTEGER_REF            0x0B
#define ARGI_OBJECT_REF             0x0C
#define ARGI_DEVICE_REF             0x0D
#define ARGI_REFERENCE              0x0E
#define ARGI_TARGETREF              0x0F
#define ARGI_FIXED_TARGET           0x10
#define ARGI_SIMPLE_TARGET          0x11
#define ARGI_DATAOBJECT             0x12
#define ARGI_COMPLEXOBJ             0x13
#define ARGI_REF_OR_STRING          0x14
#define ARGI_REGION_OR_BUFFER       0x15
#define ARGI_DATAREFOBJ             0x16
#define ARGI_INVALID_OPCODE         0xFFFFFFFF
#define AML_EXTOP_HASH_OFFSET       22
#define AML_LNOT_HASH_OFFSET        19
#define OPGRP_NAMED                 0x01
#define OPGRP_FIELD                 0x02
#define OPGRP_BYTELIST              0x04
#define AML_LOGICAL                 0x0001
#define AML_LOGICAL_NUMERIC         0x0002
#define AML_MATH                    0x0004
#define AML_CREATE                  0x0008
#define AML_FIELD                   0x0010
#define AML_DEFER                   0x0020
#define AML_NAMED                   0x0040
#define AML_NSNODE                  0x0080
#define AML_NSOPCODE                0x0100
#define AML_NSOBJECT                0x0200
#define AML_HAS_RETVAL              0x0400
#define AML_HAS_TARGET              0x0800
#define AML_HAS_ARGS                0x1000
#define AML_CONSTANT                0x2000
#define AML_NO_OPERAND_RESOLVE      0x4000
#define AML_FLAGS_EXEC_0A_0T_1R                                     AML_HAS_RETVAL
#define AML_FLAGS_EXEC_1A_0T_0R     AML_HAS_ARGS
#define AML_FLAGS_EXEC_1A_0T_1R     AML_HAS_ARGS |                  AML_HAS_RETVAL
#define AML_FLAGS_EXEC_1A_1T_0R     AML_HAS_ARGS | AML_HAS_TARGET
#define AML_FLAGS_EXEC_1A_1T_1R     AML_HAS_ARGS | AML_HAS_TARGET | AML_HAS_RETVAL
#define AML_FLAGS_EXEC_2A_0T_0R     AML_HAS_ARGS
#define AML_FLAGS_EXEC_2A_0T_1R     AML_HAS_ARGS |                  AML_HAS_RETVAL
#define AML_FLAGS_EXEC_2A_1T_1R     AML_HAS_ARGS | AML_HAS_TARGET | AML_HAS_RETVAL
#define AML_FLAGS_EXEC_2A_2T_1R     AML_HAS_ARGS | AML_HAS_TARGET | AML_HAS_RETVAL
#define AML_FLAGS_EXEC_3A_0T_0R     AML_HAS_ARGS
#define AML_FLAGS_EXEC_3A_1T_1R     AML_HAS_ARGS | AML_HAS_TARGET | AML_HAS_RETVAL
#define AML_FLAGS_EXEC_6A_0T_1R     AML_HAS_ARGS |                  AML_HAS_RETVAL
#define AML_TYPE_EXEC_0A_0T_1R      0x00
#define AML_TYPE_EXEC_1A_0T_0R      0x01
#define AML_TYPE_EXEC_1A_0T_1R      0x02
#define AML_TYPE_EXEC_1A_1T_0R      0x03
#define AML_TYPE_EXEC_1A_1T_1R      0x04
#define AML_TYPE_EXEC_2A_0T_0R      0x05
#define AML_TYPE_EXEC_2A_0T_1R      0x06
#define AML_TYPE_EXEC_2A_1T_1R      0x07
#define AML_TYPE_EXEC_2A_2T_1R      0x08
#define AML_TYPE_EXEC_3A_0T_0R      0x09
#define AML_TYPE_EXEC_3A_1T_1R      0x0A
#define AML_TYPE_EXEC_6A_0T_1R      0x0B
#define AML_TYPE_LITERAL            0x0B
#define AML_TYPE_CONSTANT           0x0C
#define AML_TYPE_METHOD_ARGUMENT    0x0D
#define AML_TYPE_LOCAL_VARIABLE     0x0E
#define AML_TYPE_DATA_TERM          0x0F
#define AML_TYPE_METHOD_CALL        0x10
#define AML_TYPE_CREATE_FIELD       0x11
#define AML_TYPE_CREATE_OBJECT      0x12
#define AML_TYPE_CONTROL            0x13
#define AML_TYPE_NAMED_NO_OBJ       0x14
#define AML_TYPE_NAMED_FIELD        0x15
#define AML_TYPE_NAMED_SIMPLE       0x16
#define AML_TYPE_NAMED_COMPLEX      0x17
#define AML_TYPE_RETURN             0x18
#define AML_TYPE_UNDEFINED          0x19
#define AML_TYPE_BOGUS              0x1A
#define ACPI_AML_PACKAGE_TYPE1      0x40
#define ACPI_AML_PACKAGE_TYPE2      0x4000
#define ACPI_AML_PACKAGE_TYPE3      0x400000
#define ACPI_AML_PACKAGE_TYPE4      0x40000000
#define AML_CLASS_EXECUTE           0x00
#define AML_CLASS_CREATE            0x01
#define AML_CLASS_ARGUMENT          0x02
#define AML_CLASS_NAMED_OBJECT      0x03
#define AML_CLASS_CONTROL           0x04
#define AML_CLASS_ASCII             0x05
#define AML_CLASS_PREFIX            0x06
#define AML_CLASS_INTERNAL          0x07
#define AML_CLASS_RETURN_VALUE      0x08
#define AML_CLASS_METHOD_CALL       0x09
#define AML_CLASS_UNKNOWN           0x0A
typedef enum  AML_MATCH_OPERATOR;
#define MAX_MATCH_OPERATOR          5
#define AML_FIELD_ACCESS_TYPE_MASK  0x0F
#define AML_FIELD_LOCK_RULE_MASK    0x10
#define AML_FIELD_UPDATE_RULE_MASK  0x60
typedef enum  AML_ACCESS_TYPE;
typedef enum  AML_LOCK_RULE;
typedef enum  AML_UPDATE_RULE;
typedef enum  AML_ACCESS_ATTRIBUTE;
#define AML_METHOD_ARG_COUNT        0x07
#define AML_METHOD_SERIALIZED       0x08
#define AML_METHOD_SYNC_LEVEL       0xF0