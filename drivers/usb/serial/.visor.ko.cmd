cmd_drivers/usb/serial/visor.ko := mipsel-oe-linux-ld -r  -m elf32ltsmip -T /home/kajgan/Skrivebord/GIGA_KER/kernel_2.6.36_SOLO/scripts/module-common.lds --build-id  -o drivers/usb/serial/visor.ko drivers/usb/serial/visor.o drivers/usb/serial/visor.mod.o