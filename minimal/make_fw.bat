C:\VSARM\armcc\bin\arm-none-eabi-g++ -mcpu=cortex-m3 -c -o blink.o blink.cpp
C:\VSARM\armcc\bin\arm-none-eabi-ld -T blink.ld -o blink.elf blink.o
C:\VSARM\armcc\bin\arm-none-eabi-objcopy -o binary blink.elf blink.bin