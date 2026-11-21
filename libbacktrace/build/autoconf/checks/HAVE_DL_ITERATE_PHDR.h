// HAVE_DL_ITERATE_PHDR : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_DL_ITERATE_PHDR

// TODO: available on Solaris 11 (but not 10).

/* Check for the dl_iterate_phdr() function declared in <link.h>.
 *
 * Available since glibc 2.2.4 (declared only with _GNU_SOURCE), in the other
 * Linux libcs (musl and Bionic), FreeBSD 7.0, OpenBSD 3.7, and NetBSD 6.0.
 * Not available on Mac OS or Windows including MinGW.
 */
#if (BUILD2_AUTOCONF_GLIBC_PREREQ(2, 3) && defined(_GNU_SOURCE)) || \
    (defined(__linux__) && !defined(__GLIBC__))                  || \
    BUILD2_AUTOCONF_FREEBSD_PREREQ(7, 0)                         || \
    BUILD2_AUTOCONF_OPENBSD_PREREQ(200505)                       || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(6, 0)
#  define HAVE_DL_ITERATE_PHDR 1
#endif
