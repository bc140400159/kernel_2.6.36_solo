cmd_drivers/usb/serial/siemens_mpi.ko := mipsel-oe-linux-ld -r  -m elf32ltsmip -T /home/kajgan/Skrivebord/GIGA_KER/kernel_2.6.36_SOLO/scripts/module-common.lds --build-id  -o drivers/usb/serial/siemens_mpi.ko drivers/usb/serial/siemens_mpi.o drivers/usb/serial/siemens_mpi.mod.o