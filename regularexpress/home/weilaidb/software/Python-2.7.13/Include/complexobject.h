#define Py_COMPLEXOBJECT_H
typedef struct  Py_complex;
#define c_sum _Py_c_sum
#define c_diff _Py_c_diff
#define c_neg _Py_c_neg
#define c_prod _Py_c_prod
#define c_quot _Py_c_quot
#define c_pow _Py_c_pow
#define c_abs _Py_c_abs
PyAPI_FUNC(Py_complex) c_sum(Py_complex, Py_complex);
PyAPI_FUNC(Py_complex) c_diff(Py_complex, Py_complex);
PyAPI_FUNC(Py_complex) c_neg(Py_complex);
PyAPI_FUNC(Py_complex) c_prod(Py_complex, Py_complex);
PyAPI_FUNC(Py_complex) c_quot(Py_complex, Py_complex);
PyAPI_FUNC(Py_complex) c_pow(Py_complex, Py_complex);
PyAPI_FUNC(double) c_abs(Py_complex);
typedef struct  PyComplexObject;
PyAPI_DATA(PyTypeObject) PyComplex_Type;
#define PyComplex_Check(op) PyObject_TypeCheck(op, &PyComplex_Type)
#define PyComplex_CheckExact(op) (Py_TYPE(op) == &PyComplex_Type)
PyAPI_FUNC(PyObject *) PyComplex_FromCComplex(Py_complex);
PyAPI_FUNC(PyObject *) PyComplex_FromDoubles(double real, double imag);
PyAPI_FUNC(double) PyComplex_RealAsDouble(PyObject *op);
PyAPI_FUNC(double) PyComplex_ImagAsDouble(PyObject *op);
PyAPI_FUNC(Py_complex) PyComplex_AsCComplex(PyObject *op);
PyAPI_FUNC(PyObject *) _PyComplex_FormatAdvanced(PyObject *obj,
char *format_spec,
Py_ssize_t format_spec_len);
