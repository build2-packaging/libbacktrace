// HAVE__PGMPTR

#undef HAVE__PGMPTR

/* Check for the _pgmptr variable declared in <stdlib.h>. It holds the path
 * of the executable.
 *
 * Available on Windows including MinGW. Not available on Linux/glibc or
 * Mac OS.
 */
#if defined(_WIN32)
#  define HAVE__PGMPTR 1
#endif
