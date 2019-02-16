/*
 * EEPROM Clear
 *
 * Sets all of the bytes of the EEPROM to 0.
 * Please see eeprom_iteration for a more in depth
 * look at how to traverse the EEPROM.
 *
 * This example code is in the public domain.
 */

#include <EEPROM.h>
int hi_address = 0;
int hunger_address=20;
int happiness_address=30;
int health_address =40;
int discipline_address=50;
int weight_address=60;
int age_address=70;

void setup() {
  // initialize the LED pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
 
  /***
    Iterate through each byte of the EEPROM storage.

    Larger AVR processors have larger EEPROM sizes, E.g:
    - Arduno Duemilanove: 512b EEPROM storage.
    - Arduino Uno:        1kb EEPROM storage.
    - Arduino Mega:       4kb EEPROM storage.

    Rather than hard-coding the length, you should use the pre-provided length function.
    This will make your code portable to all AVR processors.
  ***/

  for (int i = 0 ; i < EEPROM.length() ; i++) {
    EEPROM.write(i, 0);
  }
        float age = 0;
        float hunger = 100;
        float happiness = 100;
        float discipline = 100;
        float health = 100;
        float weight = 1 ;

        EEPROM.put(age_address, age);
        EEPROM.put(hunger_address, hunger);
        EEPROM.put(happiness_address, happiness);
        EEPROM.put(discipline_address, discipline);
        EEPROM.put(health_address, health);
        EEPROM.put(weight_address, weight);


  // turn the LED on when we're done
  digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {
  /** Empty loop. **/
}
