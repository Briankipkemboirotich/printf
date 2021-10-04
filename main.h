#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

typedef struct vtype
{
	char tp;
	void (*f)();
} vtype_t;

int _printf(const char *format, ...);

#endif
