#if !HAVE_ATOMICS_NATIVE
#if HAVE_PTHREADS
static pthread_mutex_t atomic_lock = PTHREAD_MUTEX_INITIALIZER;
avpriv_atomic_int_get
avpriv_atomic_int_set
avpriv_atomic_int_add_and_fetch
*avpriv_atomic_ptr_cas
#elif !HAVE_THREADS
avpriv_atomic_int_get
avpriv_atomic_int_set
avpriv_atomic_int_add_and_fetch
*avpriv_atomic_ptr_cas
#error
