// HAVE_SYS_LINK_H

#undef HAVE_SYS_LINK_H

/* Check for the <sys/link.h> header.
 *
 * Only available on Solaris. Not available on Linux/glibc, Mac OS, or
 * Windows including MinGW.
 */
#if defined(__sun)
#  define HAVE_SYS_LINK_H 1
#endif
