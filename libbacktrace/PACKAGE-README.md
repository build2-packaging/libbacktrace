# libbacktrace - C library for producing symbolic backtraces with debug info

This is a `build2` package for the
[`libbacktrace`](https://github.com/ianlancetaylor/libbacktrace) C library.
It may be linked into a C/C++ program to produce symbolic backtraces, for
example to print a detailed backtrace when an error occurs or to gather
detailed profiling information. In general the functions it provides are
async-signal-safe. It supports ELF, PE/COFF, Mach-O, and XCOFF executables
with DWARF debugging information. Symbolic resolution (file names and line
numbers) additionally requires the calling program to be compiled with debug
information.

Upstream does not tag releases (its `README.md` calls it version 1.0), so
this package uses `1.0.Z` versions, each pinned to an upstream commit. This
package does not support AIX/XCOFF, and on Windows it only supports MinGW
GCC (not MSVC or Clang).


## Usage

To start using `libbacktrace` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libbacktrace ^1.0.0
```

Then import the library in your `buildfile`:

```
import libs = libbacktrace%lib{backtrace}
```


## Importable targets

This package provides the following importable targets:

```
lib{backtrace}
```

Its public headers are installed into the `libbacktrace/` subdirectory. The
recommended way to include them is with that prefix, as
`<libbacktrace/backtrace.h>` and `<libbacktrace/backtrace-supported.h>`, but
upstream's unprefixed `<backtrace.h>` and `<backtrace-supported.h>` also work.


## Configuration variables

This package provides no configuration variables.
