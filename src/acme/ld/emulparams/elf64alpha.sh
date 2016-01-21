ENTRY=_start
SCRIPT_NAME=elf
ELFSIZE=64
TEMPLATE_NAME=elf32
EXTRA_EM_FILE=alphaelf
OUTPUT_FORMAT="elf64-alpha"
TEXT_START_ADDR="0x120000000"
MAXPAGESIZE=0x10000
COMMONPAGESIZE=0x2000
NONPAGED_TEXT_START_ADDR="0x120000000"
ARCH=alpha
MACHINE=
GENERATE_SHLIB_SCRIPT=yes
DATA_PLT=
# Note that the number is always big-endian, thus we have to 
# reverse the digit string.
NOP=0x0000fe2f1f04ff47		# unop; nop

OTHER_READONLY_SECTIONS="
  .reginfo      ${RELOCATING-0} : { *(.reginfo) }"