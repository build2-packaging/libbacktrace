// HAVE_SYS_LDR_H

#undef HAVE_SYS_LDR_H

/* Check for the <sys/ldr.h> header.
 *
 * Only available on AIX. Not available on Linux/glibc, Mac OS, or Windows
 * including MinGW.
 */
#if defined(_AIX)
#  define HAVE_SYS_LDR_H 1
#endif
