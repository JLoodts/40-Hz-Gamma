/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// Define Pins
#define LED1 2
#define NR_LEDS 1
#define DELAY_TIME 25
#define LIGHT_TIME 15

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for(int i = LED1; i < LED1+NR_LEDS; i += 1) // run over all the LED's
  {
      pinMode(i, OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {

  for(int i = LED1; i < LED1+NR_LEDS; i += 1) // run over all the LED's
  {
    digitalWrite(i, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  delay(LIGHT_TIME);                       // wait 2x12 milliseconds ~40Hz
  for(int i = LED1; i < LED1+NR_LEDS; i += 1) // run over all the LED's
  {
    digitalWrite(i, LOW);   // turn the LEDs off (LOW is the voltage level)
  }
  delay(DELAY_TIME-LIGHT_TIME);                       // wait 2x12 milliseconds ~40Hz


/*
//analogWrite(RED, 255); // choose a value between 1 and 255 to change the color.
analogWrite(GREEN, greenValue);
analogWrite(BLUE, blueValue);
delay(3000);

*/



}
