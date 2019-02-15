#include <EEPROM.h>
int hi_address = 0;
int hunger_address=2;
int happiness_address=3;
int health_address =4;
int discipline_address=5;
int weight_address=6;
int age_address=7;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  for (int i = 0 ; i < EEPROM.length() ; i++) {
    EEPROM.write(i, 0);
  }


  EEPROM.write(age_address, 0);
  EEPROM.write(hunger_address, 100);
  EEPROM.write(happiness_address, 100);
  EEPROM.write(discipline_address, 100);
  EEPROM.write(health_address, 100);
  EEPROM.write(weight_address, 1);


  // turn the LED on when we're done
  digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {
  /** Empty loop. **/
}
