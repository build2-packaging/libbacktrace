# libbacktrace - A C library that may be linked into a C/C++ program to produce symbolic backtraces

This is a `build2` package for the [`<UPSTREAM-NAME>`](https://<UPSTREAM-URL>)
C library. It provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `libbacktrace` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libbacktrace ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libbacktrace%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libbacktrace.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
