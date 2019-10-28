# recipe-05

An example of compiler flags setting.

```
mkdir -p build
cd build
cmake ..
cmake --build .
```

Run `make -n` or `cmake --build . -- VERBOSE=1` for printing all commands executed and check the compiler flags. An other approach for controlling compiler flags is invoking CMake with an additional argument:

```
mkdir -p build
cd build
cmake -D CMAKE_CXX_FLAGS="-Wall" ..
cmake --build .
```