cmd_fs/ext2/ext2.ko := mipsel-oe-linux-ld -r  -m elf32ltsmip -T /home/kajgan/Skrivebord/GIGA_KER/kernel_2.6.36_SOLO/scripts/module-common.lds --build-id  -o fs/ext2/ext2.ko fs/ext2/ext2.o fs/ext2/ext2.mod.o