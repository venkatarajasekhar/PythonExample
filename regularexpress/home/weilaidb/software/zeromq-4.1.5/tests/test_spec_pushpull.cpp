const char *bind_address = 0;
const char *connect_address = 0;
void test_push_round_robin_out (void *ctx)
void test_pull_fair_queue_in (void *ctx)
void test_push_block_on_send_no_peers (void *ctx)
void test_destroy_queue_on_disconnect (void *ctx)
int main (void)
{
setup_test_environment();
void *ctx = zmq_ctx_new ();
assert (ctx);
const char *binds [] = { "inproc:
const char *connects [] =
