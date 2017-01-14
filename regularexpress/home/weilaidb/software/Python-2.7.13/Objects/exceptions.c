#define PY_SSIZE_T_CLEAN
#define EXC_MODULE_NAME
PyDoc_STRVAR(exceptions_doc, "Python's standard exception class hierarchy.\n\
\n\
Exceptions found here are defined both in the exceptions module and the\n\
built-in namespace.  It is recommended that user-defined exceptions\n\
inherit from Exception.  See the documentation for the exception\n\
inheritance hierarchy.\n\
");
static PyObject *
BaseException_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
static int
BaseException_init(PyBaseExceptionObject *self, PyObject *args, PyObject *kwds)
static int
BaseException_clear(PyBaseExceptionObject *self)
static void
BaseException_dealloc(PyBaseExceptionObject *self)
static int
BaseException_traverse(PyBaseExceptionObject *self, visitproc visit, void *arg)
static PyObject *
BaseException_str(PyBaseExceptionObject *self)
static PyObject *
BaseException_unicode(PyBaseExceptionObject *self)
static PyObject *
BaseException_repr(PyBaseExceptionObject *self)
static PyObject *
BaseException_reduce(PyBaseExceptionObject *self)
static PyObject *
BaseException_setstate(PyObject *self, PyObject *state)
static PyMethodDef BaseException_methods[] = ;
static PyObject *
BaseException_getitem(PyBaseExceptionObject *self, Py_ssize_t index)
static PyObject *
BaseException_getslice(PyBaseExceptionObject *self,
Py_ssize_t start, Py_ssize_t stop)
static PySequenceMethods BaseException_as_sequence = ;
static PyObject *
BaseException_get_dict(PyBaseExceptionObject *self)
static int
BaseException_set_dict(PyBaseExceptionObject *self, PyObject *val)
static PyObject *
BaseException_get_args(PyBaseExceptionObject *self)
static int
BaseException_set_args(PyBaseExceptionObject *self, PyObject *val)
static PyObject *
BaseException_get_message(PyBaseExceptionObject *self)
static int
BaseException_set_message(PyBaseExceptionObject *self, PyObject *val)
static PyGetSetDef BaseException_getset[] = ;
static PyTypeObject _PyExc_BaseException = ;
PyObject *PyExc_BaseException = (PyObject *)&_PyExc_BaseException;
#define SimpleExtendsException(EXCBASE, EXCNAME, EXCDOC) \
static PyTypeObject _PyExc_ ## EXCNAME = ; \
PyObject *PyExc_ ## EXCNAME = (PyObject *)&_PyExc_ ## EXCNAME
#define MiddlingExtendsException(EXCBASE, EXCNAME, EXCSTORE, EXCDOC) \
static PyTypeObject _PyExc_ ## EXCNAME = ; \
PyObject *PyExc_ ## EXCNAME = (PyObject *)&_PyExc_ ## EXCNAME
#define ComplexExtendsException(EXCBASE, EXCNAME, EXCSTORE, EXCDEALLOC, EXCMETHODS, EXCMEMBERS, EXCSTR, EXCDOC) \
static PyTypeObject _PyExc_ ## EXCNAME = ; \
PyObject *PyExc_ ## EXCNAME = (PyObject *)&_PyExc_ ## EXCNAME
SimpleExtendsException(PyExc_BaseException, Exception,
);
SimpleExtendsException(PyExc_Exception, StandardError,
);
SimpleExtendsException(PyExc_StandardError, TypeError,
);
SimpleExtendsException(PyExc_Exception, StopIteration,
);
SimpleExtendsException(PyExc_BaseException, GeneratorExit,
);
static int
SystemExit_init(PySystemExitObject *self, PyObject *args, PyObject *kwds)
static int
SystemExit_clear(PySystemExitObject *self)
static void
SystemExit_dealloc(PySystemExitObject *self)
static int
SystemExit_traverse(PySystemExitObject *self, visitproc visit, void *arg)
static PyMemberDef SystemExit_members[] = ;
ComplexExtendsException(PyExc_BaseException, SystemExit, SystemExit,
SystemExit_dealloc, 0, SystemExit_members, 0,
);
SimpleExtendsException(PyExc_BaseException, KeyboardInterrupt,
);
SimpleExtendsException(PyExc_StandardError, ImportError,
);
static int
EnvironmentError_init(PyEnvironmentErrorObject *self, PyObject *args,
PyObject *kwds)
static int
EnvironmentError_clear(PyEnvironmentErrorObject *self)
static void
EnvironmentError_dealloc(PyEnvironmentErrorObject *self)
static int
EnvironmentError_traverse(PyEnvironmentErrorObject *self, visitproc visit,
void *arg)
static PyObject *
EnvironmentError_str(PyEnvironmentErrorObject *self)
static PyMemberDef EnvironmentError_members[] = ;
static PyObject *
EnvironmentError_reduce(PyEnvironmentErrorObject *self)
static PyMethodDef EnvironmentError_methods[] = ;
ComplexExtendsException(PyExc_StandardError, EnvironmentError,
EnvironmentError, EnvironmentError_dealloc,
EnvironmentError_methods, EnvironmentError_members,
EnvironmentError_str,
);
MiddlingExtendsException(PyExc_EnvironmentError, IOError,
EnvironmentError, );
MiddlingExtendsException(PyExc_EnvironmentError, OSError,
EnvironmentError, );
static int
WindowsError_clear(PyWindowsErrorObject *self)
static void
WindowsError_dealloc(PyWindowsErrorObject *self)
static int
WindowsError_traverse(PyWindowsErrorObject *self, visitproc visit, void *arg)
static int
WindowsError_init(PyWindowsErrorObject *self, PyObject *args, PyObject *kwds)
static PyObject *
WindowsError_str(PyWindowsErrorObject *self)
static PyMemberDef WindowsError_members[] = ;
ComplexExtendsException(PyExc_OSError, WindowsError, WindowsError,
WindowsError_dealloc, 0, WindowsError_members,
WindowsError_str, );
MiddlingExtendsException(PyExc_OSError, VMSError, EnvironmentError,
);
SimpleExtendsException(PyExc_StandardError, EOFError,
);
SimpleExtendsException(PyExc_StandardError, RuntimeError,
);
SimpleExtendsException(PyExc_RuntimeError, NotImplementedError,
);
SimpleExtendsException(PyExc_StandardError, NameError,
);
SimpleExtendsException(PyExc_NameError, UnboundLocalError,
);
SimpleExtendsException(PyExc_StandardError, AttributeError,
);
static int
SyntaxError_init(PySyntaxErrorObject *self, PyObject *args, PyObject *kwds)
static int
SyntaxError_clear(PySyntaxErrorObject *self)
static void
SyntaxError_dealloc(PySyntaxErrorObject *self)
static int
SyntaxError_traverse(PySyntaxErrorObject *self, visitproc visit, void *arg)
static char *
my_basename(char *name)
static PyObject *
SyntaxError_str(PySyntaxErrorObject *self)
static PyMemberDef SyntaxError_members[] = ;
ComplexExtendsException(PyExc_StandardError, SyntaxError, SyntaxError,
SyntaxError_dealloc, 0, SyntaxError_members,
SyntaxError_str, );
MiddlingExtendsException(PyExc_SyntaxError, IndentationError, SyntaxError,
);
MiddlingExtendsException(PyExc_IndentationError, TabError, SyntaxError,
);
SimpleExtendsException(PyExc_StandardError, LookupError,
);
SimpleExtendsException(PyExc_LookupError, IndexError,
);
static PyObject *
KeyError_str(PyBaseExceptionObject *self)
ComplexExtendsException(PyExc_LookupError, KeyError, BaseException,
0, 0, 0, KeyError_str, );
SimpleExtendsException(PyExc_StandardError, ValueError,
);
SimpleExtendsException(PyExc_ValueError, UnicodeError,
);
static PyObject *
get_string(PyObject *attr, const char *name)
static int
set_string(PyObject **attr, const char *value)
static PyObject *
get_unicode(PyObject *attr, const char *name)
PyObject *
PyUnicodeEncodeError_GetEncoding(PyObject *exc)
PyObject *
PyUnicodeDecodeError_GetEncoding(PyObject *exc)
PyObject *
PyUnicodeEncodeError_GetObject(PyObject *exc)
PyObject *
PyUnicodeDecodeError_GetObject(PyObject *exc)
PyObject *
PyUnicodeTranslateError_GetObject(PyObject *exc)
int
PyUnicodeEncodeError_GetStart(PyObject *exc, Py_ssize_t *start)
int
PyUnicodeDecodeError_GetStart(PyObject *exc, Py_ssize_t *start)
int
PyUnicodeTranslateError_GetStart(PyObject *exc, Py_ssize_t *start)
int
PyUnicodeEncodeError_SetStart(PyObject *exc, Py_ssize_t start)
int
PyUnicodeDecodeError_SetStart(PyObject *exc, Py_ssize_t start)
int
PyUnicodeTranslateError_SetStart(PyObject *exc, Py_ssize_t start)
int
PyUnicodeEncodeError_GetEnd(PyObject *exc, Py_ssize_t *end)
int
PyUnicodeDecodeError_GetEnd(PyObject *exc, Py_ssize_t *end)
int
PyUnicodeTranslateError_GetEnd(PyObject *exc, Py_ssize_t *start)
int
PyUnicodeEncodeError_SetEnd(PyObject *exc, Py_ssize_t end)
int
PyUnicodeDecodeError_SetEnd(PyObject *exc, Py_ssize_t end)
int
PyUnicodeTranslateError_SetEnd(PyObject *exc, Py_ssize_t end)
PyObject *
PyUnicodeEncodeError_GetReason(PyObject *exc)
PyObject *
PyUnicodeDecodeError_GetReason(PyObject *exc)
PyObject *
PyUnicodeTranslateError_GetReason(PyObject *exc)
int
PyUnicodeEncodeError_SetReason(PyObject *exc, const char *reason)
int
PyUnicodeDecodeError_SetReason(PyObject *exc, const char *reason)
int
PyUnicodeTranslateError_SetReason(PyObject *exc, const char *reason)
static int
UnicodeError_init(PyUnicodeErrorObject *self, PyObject *args, PyObject *kwds,
PyTypeObject *objecttype)
static int
UnicodeError_clear(PyUnicodeErrorObject *self)
static void
UnicodeError_dealloc(PyUnicodeErrorObject *self)
static int
UnicodeError_traverse(PyUnicodeErrorObject *self, visitproc visit, void *arg)
static PyMemberDef UnicodeError_members[] = ;
static int
UnicodeEncodeError_init(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
UnicodeEncodeError_str(PyObject *self)
static PyTypeObject _PyExc_UnicodeEncodeError = ;
PyObject *PyExc_UnicodeEncodeError = (PyObject *)&_PyExc_UnicodeEncodeError;
PyObject *
PyUnicodeEncodeError_Create(
const char *encoding, const Py_UNICODE *object, Py_ssize_t length,
Py_ssize_t start, Py_ssize_t end, const char *reason)
static int
UnicodeDecodeError_init(PyObject *self, PyObject *args, PyObject *kwds)
static PyObject *
UnicodeDecodeError_str(PyObject *self)
static PyTypeObject _PyExc_UnicodeDecodeError = ;
PyObject *PyExc_UnicodeDecodeError = (PyObject *)&_PyExc_UnicodeDecodeError;
PyObject *
PyUnicodeDecodeError_Create(
const char *encoding, const char *object, Py_ssize_t length,
Py_ssize_t start, Py_ssize_t end, const char *reason)
static int
UnicodeTranslateError_init(PyUnicodeErrorObject *self, PyObject *args,
PyObject *kwds)
static PyObject *
UnicodeTranslateError_str(PyObject *self)
static PyTypeObject _PyExc_UnicodeTranslateError = ;
PyObject *PyExc_UnicodeTranslateError = (PyObject *)&_PyExc_UnicodeTranslateError;
PyObject *
PyUnicodeTranslateError_Create(
const Py_UNICODE *object, Py_ssize_t length,
Py_ssize_t start, Py_ssize_t end, const char *reason)
SimpleExtendsException(PyExc_StandardError, AssertionError,
);
SimpleExtendsException(PyExc_StandardError, ArithmeticError,
);
SimpleExtendsException(PyExc_ArithmeticError, FloatingPointError,
);
SimpleExtendsException(PyExc_ArithmeticError, OverflowError,
);
SimpleExtendsException(PyExc_ArithmeticError, ZeroDivisionError,
);
SimpleExtendsException(PyExc_StandardError, SystemError,
);
SimpleExtendsException(PyExc_StandardError, ReferenceError,
);
SimpleExtendsException(PyExc_StandardError, MemoryError, );
SimpleExtendsException(PyExc_StandardError, BufferError, );
SimpleExtendsException(PyExc_Exception, Warning,
);
SimpleExtendsException(PyExc_Warning, UserWarning,
);
SimpleExtendsException(PyExc_Warning, DeprecationWarning,
);
SimpleExtendsException(PyExc_Warning, PendingDeprecationWarning,
);
SimpleExtendsException(PyExc_Warning, SyntaxWarning,
);
SimpleExtendsException(PyExc_Warning, RuntimeWarning,
);
SimpleExtendsException(PyExc_Warning, FutureWarning,
);
SimpleExtendsException(PyExc_Warning, ImportWarning,
);
SimpleExtendsException(PyExc_Warning, UnicodeWarning,
);
SimpleExtendsException(PyExc_Warning, BytesWarning,
);
PyObject *PyExc_MemoryErrorInst=NULL;
PyObject *PyExc_RecursionErrorInst = NULL;
static PyMethodDef functions[] = ;
#define PRE_INIT(TYPE) if (PyType_Ready(&_PyExc_ ## TYPE) < 0) \
Py_FatalError();
#define POST_INIT(TYPE) Py_INCREF(PyExc_ ## TYPE); \
PyModule_AddObject(m, # TYPE, PyExc_ ## TYPE); \
if (PyDict_SetItemString(bdict, # TYPE, PyExc_ ## TYPE)) \
Py_FatalError();
PyMODINIT_FUNC
_PyExc_Init(void)
void
_PyExc_Fini(void)
