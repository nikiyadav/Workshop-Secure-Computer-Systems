FLAGS = -fno-stack-protector -z execstack -no-pie -m32 -g

EXES = buffer

all: $(EXES)

$(EXES):
	gcc $(FLAGS) $@.c -o $@

clean: 
	rm -f $(EXES)
