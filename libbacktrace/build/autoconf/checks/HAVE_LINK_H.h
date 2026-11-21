// HAVE_LINK_H

#undef HAVE_LINK_H

/* Check for the <link.h> header.
 *
 * Available on Linux (glibc, musl, and Bionic), FreeBSD, OpenBSD, NetBSD,
 * and Solaris. Not available on Mac OS or Windows including MinGW.
 */
#if defined(__linux__)   || \
    defined(__FreeBSD__) || \
    defined(__OpenBSD__) || \
    defined(__NetBSD__)  || \
    defined(__sun)
#  define HAVE_LINK_H 1
#endif
