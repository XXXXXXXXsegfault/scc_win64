#ifdef __GNUC__
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#ifdef __linux__
#include <unistd.h>
#endif
#define float double
#else
#include "windows.c"
#include "mem.c"
#endif
#include "fdemu.c"
#include "xmalloc.c"
#include "string.c"
