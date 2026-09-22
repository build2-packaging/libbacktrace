# libbacktrace - C library for producing symbolic backtraces with debug info

This is a `build2` package repository for
[`libbacktrace`](https://github.com/ianlancetaylor/libbacktrace), a C
library that may be linked into a C/C++ program to produce symbolic
backtraces.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`libbacktrace` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libbacktrace/PACKAGE-README.md) file.

The development setup for `libbacktrace` uses the standard `bdep`-based workflow.
For example:

```
git clone --recurse-submodules https://github.com/build2-packaging/libbacktrace.git
cd libbacktrace

bdep init -C @gcc cc config.c=gcc
bdep update
bdep test
```
