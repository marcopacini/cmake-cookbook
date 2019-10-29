#include <cstdlib>

#include <Python/Python.h>

int main(int argc, char* argv[]) {
    Py_SetProgramName(argv[0]);
    Py_Initialize();
    PyRun_SimpleString("print('Hello, World!')");
    Py_Finalize();
    return EXIT_SUCCESS;
}