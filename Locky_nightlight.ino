#include <Arduino.h>


#include "Config.h"        // defines and bools
#include "LDR_SENSOR.h"    // ldr loop
#include "LED_ON_LEFT.h"   // left led loop
#include "LED_ON_RIGHT.h"  //right led loop


void setup() {
  startup();  // tests leds intiated
}

void loop() {


  LDRsensor();  // Check LDR againts Thresholds

  ledOnLeft();   // check Left Leds
  ledOnRight();  // check right leds

  // delay(10);  // delay to smooth functions
}
