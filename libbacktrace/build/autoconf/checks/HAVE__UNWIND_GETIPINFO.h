// HAVE__UNWIND_GETIPINFO

#undef HAVE__UNWIND_GETIPINFO

/* Check for the _Unwind_GetIPInfo() function declared in <unwind.h>.
 *
 * Provided by GCC since 4.2 (libgcc) and by Clang since 3.4 on all platforms
 * they support, including Linux/glibc, Mac OS, and Windows with MinGW. Not
 * available with MSVC. Clang identifies itself as GCC 4.2.1 through the
 * predefined __GNUC__ and __GNUC_MINOR__ macros.
 */
#if defined(__GNUC__) && \
    (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 2))
#  define HAVE__UNWIND_GETIPINFO 1
#endif
