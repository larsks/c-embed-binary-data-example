CC = gcc
LD = ld
OBJCOPY = objcopy

CFLAGS = -g

example: example.o rom.o
	$(CC) -o $@ $^

rom.o: rom.bin
	$(LD) -r -b binary -o $@ $<

	# The previous ld command will place the data in the `.data` section, which
	# is read-write By moving it to the `.rodata` section we can make it read-only
	# (attempts to write to these addresses will cause a segfault).
	$(OBJCOPY) --rename-section .data=.rodata,alloc,load,readonly,data,contents $@

rom.bin:
	printf '\x09\x08\x07\x06\x05\x04\x03\x02\x01\x00' > $@

clean:
	rm -f example *.o rom.bin
