// HAVE_TLHELP32_H

#undef HAVE_TLHELP32_H

/* Check for the <tlhelp32.h> header (Tool Help Library).
 *
 * Available on Windows including MinGW. Not available on Linux/glibc or
 * Mac OS.
 */
#if defined(_WIN32)
#  define HAVE_TLHELP32_H 1
#endif
