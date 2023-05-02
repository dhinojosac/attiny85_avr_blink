/*
 * attiny85_avr_blink.cpp
 *
 * Created: 01-May-23 10:40:15 AM
 * Author : dhinojosac
 */ 

#define F_CPU 8000000L // definir la frecuencia de nuestra CPU en 8Mhz

#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PB4 // Se define LED en el pin PB4 en placa Digispark ATtiny85

int main(void)
{
	DDRB |= (1 << LED_PIN); // Configurar LED_PIN (PB4) como salida
	
	/* Replace with your application code */
	while (1) {
		PORTB ^= (1 << LED_PIN); // Cambiar el estado de LED_PIN (PB4) 
		_delay_ms(500);      // Esperar 500 milisegundos
	}
	
	return 0;
}