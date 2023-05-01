/*
 * attiny85_avr_blink.cpp
 *
 * Created: 01-May-23 10:40:15 AM
 * Author : dhinojosac
 */ 

#define F_CPU 8000000L // definir la frecuencia de nuestra CPU en 8Mhz

#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PB4 // P4 en placa Digispark ATtiny85

int main(void)
{
	DDRB |= (1 << PB4); // Configurar PB0 como salida
	
	/* Replace with your application code */
	while (1) {
		PORTB ^= (1 << PB4); // Cambiar el estado de PB0
		_delay_ms(500);      // Esperar 500 milisegundos
	}
	
	return 0;
}