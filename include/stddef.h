/**
 * "stddef.h"
 * A replacement of stddef.h for windows
 * */

#ifndef STDDEF_H
#define STDDEF_H

typedef unsigned long long size_t;
#define NULL (void*)0

#define offsetof(S,M) ((size_t)&(((s*)0)->m))
#define sizeof(T)

#endif // STDDEF_H
