// HAVE_LIBBACKTRACE_KERN_PROC : BUILD2_AUTOCONF_LIBC_VERSION

#ifndef BUILD2_AUTOCONF_LIBC_VERSION
#  error BUILD2_AUTOCONF_LIBC_VERSION appears to be conditionally included
#endif

#undef HAVE_LIBBACKTRACE_KERN_PROC

// NOTE: keep consistent with HAVE_LIBBACKTRACE_KERN_PROC_ARGS.

/* Check for the KERN_PROC and KERN_PROC_PATHNAME sysctl names declared in
 * <sys/sysctl.h>, which libbacktrace uses to find the executable path.
 *
 * Available since FreeBSD 6.0 and NetBSD 8.0. Not available on OpenBSD,
 * Linux/glibc, Mac OS, or Windows including MinGW.
 */
#if BUILD2_AUTOCONF_FREEBSD_PREREQ(6, 0) || \
    BUILD2_AUTOCONF_NETBSD_PREREQ(8, 0)
#  define HAVE_LIBBACKTRACE_KERN_PROC 1
#endif
