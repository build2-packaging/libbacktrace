#include <backtrace.h>
#include <backtrace-supported.h>

#undef NDEBUG
#include <assert.h>
#include <stddef.h>

static int simple_count;

static int
simple_callback (void *data, uintptr_t pc)
{
  (void) data;
  (void) pc;

  ++simple_count;

  return 0;
}

static void
error_callback (void *data, const char *msg, int errnum)
{
  (void) data;
  (void) msg;
  (void) errnum;
}

int
main (void)
{
  struct backtrace_state *state;

  /* Exercise backtrace-supported.h: the macros must be defined and, per
     their own documentation, hold either 0 or 1.  */
  assert (BACKTRACE_SUPPORTED == 0 || BACKTRACE_SUPPORTED == 1);
  assert (BACKTRACE_USES_MALLOC == 0 || BACKTRACE_USES_MALLOC == 1);
  assert (BACKTRACE_SUPPORTS_THREADS == 0 || BACKTRACE_SUPPORTS_THREADS == 1);
  assert (BACKTRACE_SUPPORTS_DATA == 0 || BACKTRACE_SUPPORTS_DATA == 1);

  state = backtrace_create_state (NULL, 0, error_callback, NULL);
  assert (state != NULL);

  /* backtrace_simple() only needs the unwinder to find this frame, unlike
     backtrace_full()/backtrace_print(), whose symbolic (file/line)
     resolution additionally requires the calling binary to carry debug
     info, which is outside this library's control.
     This keeps the smoke test independent of how the test binary itself
     happens to be compiled.  */
  simple_count = 0;
  backtrace_simple (state, 0, simple_callback, error_callback, NULL);
  assert (simple_count > 0);

  return 0;
}
