#define __ACDEBUG_H__
#define ACPI_DEBUG_BUFFER_SIZE  4196
struct command_info ;
struct argument_info ;
#define PARAM_LIST(pl)                  pl
#define DBTEST_OUTPUT_LEVEL(lvl)        if (acpi_gbl_db_opt_verbose)
#define VERBOSE_PRINT(fp)               DBTEST_OUTPUT_LEVEL(lvl)
#define EX_NO_SINGLE_STEP               1
#define EX_SINGLE_STEP                  2
acpi_status acpi_db_initialize(void);
void acpi_db_terminate(void);
acpi_status
acpi_db_single_step(struct acpi_walk_state *walk_state,
union acpi_parse_object *op, u32 op_type);
acpi_status acpi_db_disassemble_method(char *name);
void acpi_db_display_table_info(char *table_arg);
void acpi_db_unload_acpi_table(char *table_arg, char *instance_arg);
void
acpi_db_set_method_breakpoint(char *location,
struct acpi_walk_state *walk_state,
union acpi_parse_object *op);
void acpi_db_set_method_call_breakpoint(union acpi_parse_object *op);
void acpi_db_get_bus_info(void);
void acpi_db_disassemble_aml(char *statements, union acpi_parse_object *op);
void acpi_db_dump_namespace(char *start_arg, char *depth_arg);
void acpi_db_dump_namespace_by_owner(char *owner_arg, char *depth_arg);
void acpi_db_send_notify(char *name, u32 value);
void acpi_db_set_method_data(char *type_arg, char *index_arg, char *value_arg);
acpi_status
acpi_db_display_objects(char *obj_type_arg, char *display_count_arg);
void acpi_db_display_interfaces(char *action_arg, char *interface_name_arg);
acpi_status acpi_db_find_name_in_namespace(char *name_arg);
void acpi_db_set_scope(char *name);
acpi_status acpi_db_sleep(char *object_arg);
void acpi_db_find_references(char *object_arg);
void acpi_db_display_locks(void);
void acpi_db_display_resources(char *object_arg);
void acpi_db_display_gpes(void);
void acpi_db_check_integrity(void);
void acpi_db_generate_gpe(char *gpe_arg, char *block_arg);
void acpi_db_check_predefined_names(void);
void acpi_db_batch_execute(void);
void acpi_db_display_method_info(union acpi_parse_object *op);
void acpi_db_decode_and_display_object(char *target, char *output_type);
void
acpi_db_display_result_object(union acpi_operand_object *obj_desc,
struct acpi_walk_state *walk_state);
acpi_status acpi_db_display_all_methods(char *display_count_arg);
void acpi_db_display_arguments(void);
void acpi_db_display_locals(void);
void acpi_db_display_results(void);
void acpi_db_display_calling_tree(void);
void acpi_db_display_object_type(char *object_arg);
void
acpi_db_display_argument_object(union acpi_operand_object *obj_desc,
struct acpi_walk_state *walk_state);
void acpi_db_execute(char *name, char **args, u32 flags);
void
acpi_db_create_execution_threads(char *num_threads_arg,
char *num_loops_arg, char *method_name_arg);
u32 acpi_db_get_cache_info(struct acpi_memory_list *cache);
acpi_object_type
acpi_db_match_argument(char *user_argument, struct argument_info *arguments);
void acpi_db_close_debug_file(void);
void acpi_db_open_debug_file(char *name);
acpi_status acpi_db_load_acpi_table(char *filename);
acpi_status
acpi_db_get_table_from_file(char *filename, struct acpi_table_header **table);
acpi_status
acpi_db_read_table_from_file(char *filename, struct acpi_table_header **table);
void acpi_db_add_to_history(char *command_line);
void acpi_db_display_history(void);
char *acpi_db_get_from_history(char *command_num_arg);
acpi_status
acpi_db_command_dispatch(char *input_buffer,
struct acpi_walk_state *walk_state,
union acpi_parse_object *op);
void ACPI_SYSTEM_XFACE acpi_db_execute_thread(void *context);
void acpi_db_generate_statistics(union acpi_parse_object *root, u8 is_method);
acpi_status acpi_db_display_statistics(char *type_arg);
void acpi_db_set_output_destination(u32 where);
void acpi_db_dump_external_object(union acpi_object *obj_desc, u32 level);
void acpi_db_prep_namestring(char *name);
struct acpi_namespace_node *acpi_db_local_ns_lookup(char *name);
void acpi_db_uint32_to_hex_string(u32 value, char *buffer);
