#include <config.h>
#include <stdio.h>
#include "gettext.h"
#define _(String) gettext (String)

int
main (void)
{
  setlocale (LC_ALL, "");
  bindtextdomain (PACKAGE, LOCALEDIR);
  textdomain (PACKAGE);
  puts (_("Hello World!"));
  return 0;
}
