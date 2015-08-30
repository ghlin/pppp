#include <stdio.h>
#include "foo.h"

int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;

  FOO_JOIN(p, r, i, n, t, f)(FOO_STRINGIFY(FOO_PLUSX(FOO_NARGS_COUNT(1, 2, 3, 4), 2)) "\n"); // we want a '6'


  return 0;
}

