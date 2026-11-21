// BACKTRACE_XCOFF_SIZE

#undef BACKTRACE_XCOFF_SIZE

/* Check for the XCOFF size (32 or 64) of the target object files.
 *
 * XCOFF is only used on AIX, where __64BIT__ is predefined when compiling
 * in 64-bit mode. Not used on Linux/glibc, Mac OS, or Windows including
 * MinGW.
 */
#if defined(_AIX)
#  if defined(__64BIT__)
#    define BACKTRACE_XCOFF_SIZE 64
#  else
#    define BACKTRACE_XCOFF_SIZE 32
#  endif
#endif
