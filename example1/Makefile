CFLAGS = -g

example: example.o rom.o
	$(CC) -o $@ $^

rom.o: rom.S rom.bin

rom.bin:
	printf '\x09\x08\x07\x06\x05\x04\x03\x02\x01\x00' > $@

clean:
	rm -f example *.o rom.bin
