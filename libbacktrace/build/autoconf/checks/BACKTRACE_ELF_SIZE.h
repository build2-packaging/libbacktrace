// BACKTRACE_ELF_SIZE

#undef BACKTRACE_ELF_SIZE

/* Check for the ELF class (32 or 64) of the target object files.
 *
 * ELF is used on Linux, the BSDs, and Solaris. Not used on Mac OS or Windows
 * including MinGW. The class follows the pointer size, also for the ILP32
 * ABIs of 64-bit CPUs (x32, MIPS n32, AArch64 ILP32). Both GCC and Clang
 * predefine __ELF__ and __SIZEOF_POINTER__.
 */
#if defined(__ELF__)
#  if __SIZEOF_POINTER__ == 8
#    define BACKTRACE_ELF_SIZE 64
#  else
#    define BACKTRACE_ELF_SIZE 32
#  endif
#endif
