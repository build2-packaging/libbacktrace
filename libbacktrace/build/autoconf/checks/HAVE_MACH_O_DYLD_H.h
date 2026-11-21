// HAVE_MACH_O_DYLD_H

#undef HAVE_MACH_O_DYLD_H

/* Check for the <mach-o/dyld.h> header.
 *
 * Available on Mac OS (including variants like iOS). Not available on
 * Linux/glibc or Windows including MinGW.
 */
#if defined(__APPLE__)
#  define HAVE_MACH_O_DYLD_H 1
#endif
