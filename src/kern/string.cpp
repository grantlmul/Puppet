// string.cpp
#include "string.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

size_t String::Numbers::strlen(const char* str)
{
	size_t len = 0;
	while (str[len])
		len++;
	return len;
}

