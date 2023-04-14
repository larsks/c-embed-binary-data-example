#include <stdint.h>
#include <stdio.h>

extern uint8_t _rom_start[], _rom_end[];
extern uint8_t _rom_size;

int main() {
  uint8_t *rom = _rom_start;
  size_t rom_size = (size_t)_rom_size;

  printf("rom_size: 0x%lX\n", rom_size);
  for (int i = 0; i < rom_size; i++) {
    printf("%02x: %02x\n", i, *(rom + i));
  }
  return 0;
}
