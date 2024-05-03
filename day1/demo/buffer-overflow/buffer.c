#include<stdio.h>
#include<string.h>

int copy_buf(char *str) {
	char buffer[50];
	strcpy(buffer, str);
}

void main(int arc, char *argv[]) {
	copy_buf(argv[1]);
	printf("DONE\n");
}
