// HAVE_LOADQUERY

#undef HAVE_LOADQUERY

// NOTE: keep consistent with HAVE_SYS_LDR_H.

/* Check for the loadquery() function declared in <sys/ldr.h>.
 *
 * Only available on AIX. Not available on Linux/glibc, Mac OS, or Windows
 * including MinGW.
 */
#if defined(_AIX)
#  define HAVE_LOADQUERY 1
#endif
