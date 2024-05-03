#include <stdio.h>
#include <stdint.h>
#include <string.h>

void copy_buf(char *str) {
	char buffer[64];
	strcpy(buffer, str);
}


int main() {
    // Define the buffer to store the addresses
    uint8_t buffer[] = {
        // 32 'A' characters
        'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
        'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
    };

    copy_buf(buffer);

    // Print the buffer content as hexadecimal values
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%02x ", buffer[i]);
    }
    printf("\n");

    return 0;
}

