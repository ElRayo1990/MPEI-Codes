#include <avr/io.h> // header file file for input output pins
#include <util/delay.h> // header file for delay.


int main (void)
{
 /* set pin 0 of PORTC for output*/
 DDRC |= _BV(DDC0);




 while(1) {

  /* set pin 0 high to turn led on */
  PORTC |= _BV(PORTC0);
  _delay_ms(1000); //delay 1 second

  /* set pin 0 low to turn led off */
  PORTC &= ~_BV(PORTC0);
  _delay_ms(1000); //delay 1 second.
 }
 }