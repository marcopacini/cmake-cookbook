# recipe-08

An example of Python script execution

```
mkdir -p build
cd build
cmake ..
cmake --build .
```

An alternative for debugging is to use the folllowing commands instead of `message()` command:

```cmake
include(CMakePrintHelpers)
cmake_print_variables(_result _output)
```