// HAVE_GETEXECNAME

#undef HAVE_GETEXECNAME

/* Check for the getexecname() function.
 *
 * Only available on Solaris. Not available on Linux/glibc, Mac OS, or
 * Windows including MinGW.
 */
#if defined(__sun)
#  define HAVE_GETEXECNAME 1
#endif
