#include <Arduino.h>
#include "Config.h"  // defines and bools



void setup() {
  startup();  // tests leds intiated
}

void loop() {

  SOUNDsensor();  // Check if clap has happened
  LDRsensor();    // Check LDR againts Thresholds
  delay(1);      // smooth functions
  ledOnLeft();    // Check Left Leds
  ledOnRight();   // Check right leds
}
