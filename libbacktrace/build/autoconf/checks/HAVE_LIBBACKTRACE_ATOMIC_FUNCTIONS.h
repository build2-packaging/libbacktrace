// HAVE_LIBBACKTRACE_ATOMIC_FUNCTIONS

#undef HAVE_LIBBACKTRACE_ATOMIC_FUNCTIONS

/* Check for the __atomic built-in functions that libbacktrace uses
 * (__atomic_load_n() and __atomic_store_n()).
 *
 * Provided by GCC since 4.7 and by Clang since 3.1, which both predefine
 * the __ATOMIC_ACQUIRE memory order macro along with them, on all platforms
 * including Linux/glibc, Mac OS, and Windows with MinGW. Not available with
 * MSVC.
 */
#if defined(__ATOMIC_ACQUIRE)
#  define HAVE_LIBBACKTRACE_ATOMIC_FUNCTIONS 1
#endif
