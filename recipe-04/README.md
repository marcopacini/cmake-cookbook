# recipe-04

An example of different types of build.

## Default build (Release)
```
mkdir -p build
cd build
cmake ..
cmake --build .
```

## Debug build
```
mkdir -p build
cd build
cmake -D CMAKE_BUILD_TYPE=Debug ..
cmake --build .
```

The values recognised by CMake are `Debug`, `Release`, `RelWithDebInfo` and `MinSizeRel`.
