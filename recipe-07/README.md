# recipe-07

An example of file configuration.

```
mkdir -p build
cd build
cmake ..
cmake --build .
```

`configure_file()` copies _config.h.in_ file to _config.h_ file and substitutes variable values referenced as `@VAR@` (or `${VAR}`) in the input file content. Because _config.h_ is created in `build` directory is required the command `target_include_directories()`.
