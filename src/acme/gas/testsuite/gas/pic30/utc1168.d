#as: -I$srcdir/$subdir
#objdump: -s -j .text
#name: .incbin,.pincbin in .text section

.*:.*

Contents of section .text:
 0000 000100 020300 040500 060700  ............
 0008 080900 0a0b00 0c0d00 0e0f00  ............
 0010 101112 131415 161718 191a1b  ............
 0018 1c1d1e 1f0000                ......      