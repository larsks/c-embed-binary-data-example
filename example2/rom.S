            .section ".rodata"
            .global _rom_start
            .global _rom_end
            .global _rom_size
_rom_start:
            .incbin "rom.bin"
_rom_end:
            .equ _rom_size, _rom_end - _rom_start
