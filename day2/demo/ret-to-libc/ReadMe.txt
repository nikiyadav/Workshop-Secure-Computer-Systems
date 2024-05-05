Steps for ret-to-libc attack:

1. Find the location of return address.
	- trial and error
	- Disassemble and use gdb

2. Find the location of a libc function such as system.
	- Use gdb
	- system function address: 0xf7ddc3d0

3. Find location of argument (/bin/sh) to be passed to libc function.
	- Use gdb
	- Find memory address of libc: info proc map
	0xf7d9f000 0xf7f74000   0x1d5000        0x0 /lib/i386-linux-gnu/libc-2.27.so
	0xf7f74000 0xf7f75000     0x1000   0x1d5000 /lib/i386-linux-gnu/libc-2.27.so
	0xf7f75000 0xf7f77000     0x2000   0x1d5000 /lib/i386-linux-gnu/libc-2.27.so
	0xf7f77000 0xf7f78000     0x1000   0x1d7000 /lib/i386-linux-gnu/libc-2.27.so

	- Find /bin/sh in this memory range
	  find 0xf7d9f000, 0xf7f78000, "/bin/sh"
		0xf7f1d1db

	- Check the string is present at that location: x/s addr


4. Create payload using address of libc function and address of argument

5. Pass this payload to the program

