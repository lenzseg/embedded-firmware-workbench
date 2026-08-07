/**
 * @file   main.c
 * @brief  Bare-metal GPIO LED blink for ATmega328P (PB5 / Arduino Pin 13).
 * @author Nelson Rodriguez
 * @date   2026
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void){
    DDRB |= (1 << PB5);

    while(1) {
        PORTB |= (1 << PB5);
        _delay_ms(1000);
        PORTB &= ~(1 << PB5);
        _delay_ms(1000);
    }
    return 0;
}
