// HAVE_LIBBACKTRACE_SYNC_FUNCTIONS

#undef HAVE_LIBBACKTRACE_SYNC_FUNCTIONS

/* Check for the __sync built-in functions that libbacktrace uses
 * (__sync_bool_compare_and_swap(), __sync_lock_test_and_set(), and
 * __sync_lock_release()).
 *
 * Provided by GCC since 4.1 and by Clang, which identifies itself as GCC
 * 4.2.1 through the predefined __GNUC__ and __GNUC_MINOR__ macros, on all
 * platforms including Linux/glibc, Mac OS, and Windows with MinGW. Not
 * available with MSVC.
 */
#if defined(__GNUC__) && \
    (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 1))
#  define HAVE_LIBBACKTRACE_SYNC_FUNCTIONS 1
#endif
