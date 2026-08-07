MCU          = atmega328p
F_CPU        = 16000000UL
BAUD         = 115200
PROGRAMMER   = arduino

PORT         ?= /dev/ttyACM0

CC           = avr-gcc
OBJCOPY      = avr-objcopy
AVRDUDE      = avrdude

TARGET       = main
SRCS         = main.c
OBJS         = $(SRCS:.c=.o)

CFLAGS       = -mmcu=$(MCU) -DF_CPU=$(F_CPU) -O2 -Wall -Wextra -std=c99

.PHONY: all clean flash

all: $(TARGET).hex

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET).elf: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(TARGET).hex: $(TARGET).elf
	$(OBJCOPY) -O ihex -R .eeprom $< $@

flash: $(TARGET).hex
	$(AVRDUDE) -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUD) -U flash:w:$<:i

clean:
	rm -f *.o *.elf *.hex
