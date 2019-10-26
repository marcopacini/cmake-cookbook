# recipe-03

An example of conditional build.

## Building only an executable
```
mkdir -p build
cd build
cmake ..
cmake --build .
```

## Building a library and an executable
```
mkdir -p build
cd build
cmake -DUSE_LIBRARY=ON ..
cmake --build .
```
