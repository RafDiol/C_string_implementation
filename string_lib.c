#include "string_lib.h"

size_t strlen(const char* character) {
	size_t c = 0;
	char* ptr = character;
	while (*ptr) {
		c++;
		ptr++;
	}
	return c;
}

int strcmp(const char* str1, const char* str2) {
	char* ptr1 = str1;
	char* ptr2 = str2;

	while (*ptr1 && (*ptr1 == *ptr2)) {
		ptr1++;
		ptr2++;
	}

	return (*ptr1 > *ptr2) - (*ptr1 < *ptr2);
}

char* strcpy(char* dest, const char* source) {
	if (*source == NULL) {
		return NULL;
	}
	
	char* ptr_dest = dest;
	char* ptr_src = source;
	char* original_ptr = dest;

	while ((*ptr_dest = *ptr_src) != '\0') {
		ptr_dest++;
		ptr_src++;
	}
	return original_ptr;
}