#define PyMac_PRECHECK(rtn) do  while(0)
static PyObject *Folder_Error;
static PyObject *Folder_FindFolder(PyObject *_self, PyObject *_args)
static PyObject *Folder_ReleaseFolder(PyObject *_self, PyObject *_args)
static PyObject *Folder_FSFindFolder(PyObject *_self, PyObject *_args)
static PyObject *Folder_AddFolderDescriptor(PyObject *_self, PyObject *_args)
static PyObject *Folder_GetFolderTypes(PyObject *_self, PyObject *_args)
static PyObject *Folder_RemoveFolderDescriptor(PyObject *_self, PyObject *_args)
static PyObject *Folder_GetFolderName(PyObject *_self, PyObject *_args)
static PyObject *Folder_AddFolderRouting(PyObject *_self, PyObject *_args)
static PyObject *Folder_RemoveFolderRouting(PyObject *_self, PyObject *_args)
static PyObject *Folder_FindFolderRouting(PyObject *_self, PyObject *_args)
static PyObject *Folder_InvalidateFolderDescriptorCache(PyObject *_self, PyObject *_args)
static PyObject *Folder_IdentifyFolder(PyObject *_self, PyObject *_args)
static PyMethodDef Folder_methods[] = ;
void init_Folder(void)