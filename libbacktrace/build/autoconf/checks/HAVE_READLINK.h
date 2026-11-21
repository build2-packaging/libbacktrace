// HAVE_READLINK

#undef HAVE_READLINK

/* Check for the readlink() function.
 *
 * Available on Linux (glibc, musl, and Bionic), 4.2BSD and thus all BSD
 * systems (including Mac OS) since the beginning, and Solaris. Not available
 * on Windows including MinGW.
 */
#if defined(__linux__)   || \
    defined(__FreeBSD__) || \
    defined(__OpenBSD__) || \
    defined(__NetBSD__)  || \
    defined(__APPLE__)   || \
    defined(__sun)
#  define HAVE_READLINK 1
#endif
