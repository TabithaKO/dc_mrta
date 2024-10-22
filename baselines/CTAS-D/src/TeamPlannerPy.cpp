#include <TeamPlannerPy.hpp>
// #include <TeamPlanner.hpp>
#include <string>
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <numpy/arrayobject.h>
#include <boost/python.hpp>
#define NDARRAY_VERSION NPY_VERSION

#define PyArray_MIN_BUFSIZE NPY_MIN_BUFSIZE
#define PyArray_MAX_BUFSIZE NPY_MAX_BUFSIZE
#define PyArray_BUFSIZE NPY_BUFSIZE

#define PyArray_PRIORITY NPY_PRIORITY
#define PyArray_SUBTYPE_PRIORITY NPY_PRIORITY
#define PyArray_NUM_FLOATTYPE NPY_NUM_FLOATTYPE

#define NPY_MAX PyArray_MAX
#define NPY_MIN PyArray_MIN

#define PyArray_TYPES       NPY_TYPES
#define PyArray_BOOL        NPY_BOOL
#define PyArray_BYTE        NPY_BYTE
#define PyArray_UBYTE       NPY_UBYTE
#define PyArray_SHORT       NPY_SHORT
#define PyArray_USHORT      NPY_USHORT
#define PyArray_INT         NPY_INT
#define PyArray_UINT        NPY_UINT
#define PyArray_LONG        NPY_LONG
#define PyArray_ULONG       NPY_ULONG
#define PyArray_LONGLONG    NPY_LONGLONG
#define PyArray_ULONGLONG   NPY_ULONGLONG
#define PyArray_FLOAT       NPY_FLOAT
#define PyArray_DOUBLE      NPY_DOUBLE
#define PyArray_LONGDOUBLE  NPY_LONGDOUBLE
#define PyArray_CFLOAT      NPY_CFLOAT
#define PyArray_CDOUBLE     NPY_CDOUBLE
#define PyArray_CLONGDOUBLE NPY_CLONGDOUBLE
#define PyArray_OBJECT      NPY_OBJECT
#define PyArray_STRING      NPY_STRING
#define PyArray_UNICODE     NPY_UNICODE
#define PyArray_VOID        NPY_VOID
#define PyArray_NTYPES      NPY_NTYPES
#define PyArray_NOTYPE      NPY_NOTYPE
#define PyArray_CHAR        NPY_CHAR
#define PyArray_USERDEF     NPY_USERDEF
#define PyArray_NUMUSERTYPES NPY_NUMUSERTYPES

#define PyArray_INTP        NPY_INTP
#define PyArray_UINTP       NPY_UINTP

#define PyArray_INT8    NPY_INT8
#define PyArray_UINT8   NPY_UINT8
#define PyArray_INT16   NPY_INT16
#define PyArray_UINT16  NPY_UINT16
#define PyArray_INT32   NPY_INT32
#define PyArray_UINT32  NPY_UINT32

#ifdef NPY_INT64
#define PyArray_INT64   NPY_INT64
#define PyArray_UINT64  NPY_UINT64
#endif

#ifdef NPY_INT128
#define PyArray_INT128 NPY_INT128
#define PyArray_UINT128 NPY_UINT128
#endif

#ifdef NPY_FLOAT16
#define PyArray_FLOAT16  NPY_FLOAT16
#define PyArray_COMPLEX32  NPY_COMPLEX32
#endif

#ifdef NPY_FLOAT80
#define PyArray_FLOAT80  NPY_FLOAT80
#define PyArray_COMPLEX160  NPY_COMPLEX160
#endif

#ifdef NPY_FLOAT96
#define PyArray_FLOAT96  NPY_FLOAT96
#define PyArray_COMPLEX192  NPY_COMPLEX192
#endif

#ifdef NPY_FLOAT128
#define PyArray_FLOAT128  NPY_FLOAT128
#define PyArray_COMPLEX256  NPY_COMPLEX256
#endif

#define PyArray_FLOAT32    NPY_FLOAT32
#define PyArray_COMPLEX64  NPY_COMPLEX64
#define PyArray_FLOAT64    NPY_FLOAT64
#define PyArray_COMPLEX128 NPY_COMPLEX128


#define PyArray_TYPECHAR        NPY_TYPECHAR
#define PyArray_BOOLLTR         NPY_BOOLLTR
#define PyArray_BYTELTR         NPY_BYTELTR
#define PyArray_UBYTELTR        NPY_UBYTELTR
#define PyArray_SHORTLTR        NPY_SHORTLTR
#define PyArray_USHORTLTR       NPY_USHORTLTR
#define PyArray_INTLTR          NPY_INTLTR
#define PyArray_UINTLTR         NPY_UINTLTR
#define PyArray_LONGLTR         NPY_LONGLTR
#define PyArray_ULONGLTR        NPY_ULONGLTR
#define PyArray_LONGLONGLTR     NPY_LONGLONGLTR
#define PyArray_ULONGLONGLTR    NPY_ULONGLONGLTR
#define PyArray_FLOATLTR        NPY_FLOATLTR
#define PyArray_DOUBLELTR       NPY_DOUBLELTR
#define PyArray_LONGDOUBLELTR   NPY_LONGDOUBLELTR
#define PyArray_CFLOATLTR       NPY_CFLOATLTR
#define PyArray_CDOUBLELTR      NPY_CDOUBLELTR
#define PyArray_CLONGDOUBLELTR  NPY_CLONGDOUBLELTR
#define PyArray_OBJECTLTR       NPY_OBJECTLTR
#define PyArray_STRINGLTR       NPY_STRINGLTR
#define PyArray_STRINGLTR2      NPY_STRINGLTR2
#define PyArray_UNICODELTR      NPY_UNICODELTR
#define PyArray_VOIDLTR         NPY_VOIDLTR
#define PyArray_CHARLTR         NPY_CHARLTR
#define PyArray_INTPLTR         NPY_INTPLTR
#define PyArray_UINTPLTR        NPY_UINTPLTR
#define PyArray_GENBOOLLTR      NPY_GENBOOLLTR
#define PyArray_SIGNEDLTR       NPY_SIGNEDLTR
#define PyArray_UNSIGNEDLTR     NPY_UNSIGNEDLTR
#define PyArray_FLOATINGLTR     NPY_FLOATINGLTR
#define PyArray_COMPLEXLTR      NPY_COMPLEXLTR

#define PyArray_QUICKSORT   NPY_QUICKSORT
#define PyArray_HEAPSORT    NPY_HEAPSORT
#define PyArray_MERGESORT   NPY_MERGESORT
#define PyArray_SORTKIND    NPY_SORTKIND
#define PyArray_NSORTS      NPY_NSORTS

#define PyArray_NOSCALAR       NPY_NOSCALAR
#define PyArray_BOOL_SCALAR    NPY_BOOL_SCALAR
#define PyArray_INTPOS_SCALAR  NPY_INTPOS_SCALAR
#define PyArray_INTNEG_SCALAR  NPY_INTNEG_SCALAR
#define PyArray_FLOAT_SCALAR   NPY_FLOAT_SCALAR
#define PyArray_COMPLEX_SCALAR NPY_COMPLEX_SCALAR
#define PyArray_OBJECT_SCALAR  NPY_OBJECT_SCALAR
#define PyArray_SCALARKIND     NPY_SCALARKIND
#define PyArray_NSCALARKINDS   NPY_NSCALARKINDS

#define PyArray_ANYORDER     NPY_ANYORDER
#define PyArray_CORDER       NPY_CORDER
#define PyArray_FORTRANORDER NPY_FORTRANORDER
#define PyArray_ORDER        NPY_ORDER

#define PyDescr_ISBOOL      PyDataType_ISBOOL
#define PyDescr_ISUNSIGNED  PyDataType_ISUNSIGNED
#define PyDescr_ISSIGNED    PyDataType_ISSIGNED
#define PyDescr_ISINTEGER   PyDataType_ISINTEGER
#define PyDescr_ISFLOAT     PyDataType_ISFLOAT
#define PyDescr_ISNUMBER    PyDataType_ISNUMBER
#define PyDescr_ISSTRING    PyDataType_ISSTRING
#define PyDescr_ISCOMPLEX   PyDataType_ISCOMPLEX
#define PyDescr_ISPYTHON    PyDataType_ISPYTHON
#define PyDescr_ISFLEXIBLE  PyDataType_ISFLEXIBLE
#define PyDescr_ISUSERDEF   PyDataType_ISUSERDEF
#define PyDescr_ISEXTENDED  PyDataType_ISEXTENDED
#define PyDescr_ISOBJECT    PyDataType_ISOBJECT
#define PyDescr_HASFIELDS   PyDataType_HASFIELDS

#define PyArray_LITTLE NPY_LITTLE
#define PyArray_BIG NPY_BIG
#define PyArray_NATIVE NPY_NATIVE
#define PyArray_SWAP NPY_SWAP
#define PyArray_IGNORE NPY_IGNORE

#define PyArray_NATBYTE NPY_NATBYTE
#define PyArray_OPPBYTE NPY_OPPBYTE

#define PyArray_MAX_ELSIZE NPY_MAX_ELSIZE

#define PyArray_USE_PYMEM NPY_USE_PYMEM

#define PyArray_RemoveLargest PyArray_RemoveSmallest

std::string pystr2str(PyObject* strObj) {
    PyObject* strRepr = PyObject_Repr(strObj);
    const char* strChar = PyUnicode_AsUTF8(strRepr);
    std::string str(strChar);
    str.erase(0, 1);
    str.erase(str.size() - 1);
    return str;
}

PyObject* vector2matrix(const std::vector<int>& vec) {
    int matLen = static_cast<int>(vec.size());
    int64_t* arr = new int64_t[matLen]; // int32_t
    std::copy(vec.begin(), vec.end(), arr);
    const int matDim = 1;
    npy_intp matSize[matDim];
    matSize[0] = matLen;
    PyObject* mat1 = PyArray_SimpleNewFromData(matDim, matSize, PyArray_INT64, arr);
    return mat1;
}

PyObject* vector2matrix(const std::vector<double>& vec) {
    int matLen = static_cast<int>(vec.size());
    double* arr = new double[matLen]; // int32_t
    std::copy(vec.begin(), vec.end(), arr);
    const int matDim = 1;
    npy_intp matSize[matDim];
    matSize[0] = matLen;
    PyObject* mat1 = PyArray_SimpleNewFromData(matDim, matSize, PyArray_FLOAT64, arr);
    return mat1;
}

template <class T>
PyObject* result2list(const std::vector<std::vector<T>>& result) {
    int resultLen = static_cast<int>(result.size());
    PyObject* outputList = PyList_New(resultLen);
    for (int i = 0; i < resultLen; i++) {
        PyObject* mat = vector2matrix(result[i]);
        PyList_SetItem(outputList, i, mat);
    }
    return outputList;
}

PyObject* result2matrix(const std::vector<std::vector<double>>& result) {
    int matRow = static_cast<int>(result.size());
    int matCol = 0;
    if (matRow >= 1) {
        matCol = static_cast<int>(result[0].size());
    }
    double* arr = new double[matRow * matCol]; // int32_t
    for (int iRow = 0; iRow < result.size(); iRow++) {
        for (int iCol = 0; iCol < result[iRow].size(); iCol++) {
            arr[iRow * matCol + iCol] = result[iRow][iCol];
        }
    }
    const int matDim = 2;
    npy_intp matSize[matDim];
    matSize[0] = matRow;
    matSize[1] = matCol;
    PyObject* mat1 = PyArray_SimpleNewFromData(matDim, matSize, PyArray_FLOAT64, arr);
    return mat1;
}

TeamPlannerPyWrapper::TeamPlannerPyWrapper() {}

TeamPlannerPyWrapper::~TeamPlannerPyWrapper() {}

bool TeamPlannerPyWrapper::formProblem(PyObject* paramFileObj, PyObject* sampleFileObj) {
    // Convert pyobjects into strings
    std::string paramFile = pystr2str(paramFileObj);
    std::string sampleFile = pystr2str(sampleFileObj);
    // std::cout << "paramFile = " << paramFile << "\n";
    // std::cout << "sampleFile = " << sampleFile << "\n";
    // Form problems
    planner_.formProblem(paramFile);
    planner_.saveSamples(sampleFile);
    return true;
}

bool TeamPlannerPyWrapper::optimize() {
    return planner_.optimize();
}

PyObject* TeamPlannerPyWrapper::printSolution(bool flagOutput) {
    PyObject* outputTuple = PyTuple_New(3);
    if (!flagOutput) {
        planner_.printSolution();
        PyObject* noneObj0 = Py_None;
        PyObject* noneObj1 = Py_None;
        PyObject* noneObj2 = Py_None;
        PyTuple_SetItem(outputTuple, 0, noneObj0);
        PyTuple_SetItem(outputTuple, 1, noneObj1);
        PyTuple_SetItem(outputTuple, 2, noneObj1);
        return outputTuple;
    }
    import_array();
    std::vector<std::vector<int>> vehPathOut;
    std::vector<std::vector<int>> taskTeamOut;
    std::vector<std::vector<double>> taskTeamDenseOut;
    planner_.printSolution(&vehPathOut, &taskTeamOut, &taskTeamDenseOut);
    PyObject* vehPathList = result2list(vehPathOut);
    PyObject* taskTeamList = result2list(taskTeamOut);
    PyObject* taskTeamDenseList = result2matrix(taskTeamDenseOut);
    int flagSuccess = 0;
    flagSuccess = PyTuple_SetItem(outputTuple, 0, vehPathList);
    flagSuccess = PyTuple_SetItem(outputTuple, 1, taskTeamList);
    flagSuccess = PyTuple_SetItem(outputTuple, 2, taskTeamDenseList);
    return outputTuple;
}

void TeamPlannerPyWrapper::saveSolution(PyObject* saveFileObj, PyObject* paramFileObj) {
    std::string saveFileName = pystr2str(saveFileObj);
    std::string paramFileName = pystr2str(paramFileObj);
    planner_.saveSolution(saveFileName, paramFileName);
}

using namespace boost::python;
BOOST_PYTHON_MODULE(TeamPlannerPy)
{
    class_ <TeamPlannerPyWrapper> ("TeamPlannerPyWrapper")
    // .def("TeamPlannerPy", init<std::string>())
    .def("formProblem", &TeamPlannerPyWrapper::formProblem)
    .def("optimize", &TeamPlannerPyWrapper::optimize)
    .def("printSolution", &TeamPlannerPyWrapper::printSolution)
    .def("saveSolution", &TeamPlannerPyWrapper::saveSolution)
    ;
}
