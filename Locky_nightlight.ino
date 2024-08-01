#include "Config.h"        // defines and bools
#include "LDR_SENSOR.h"    // ldr loop
#include "LED_ON_LEFT.h"   // left led loop
#include "LED_ON_RIGHT.h"  //right led loop


void setup() {
  Serial.begin(9600);
  startup();  // tests leds intiated
}

void loop() {
  LDRsensor();

  if (LEDon == true) {

    ledOnLeft();
    ledOnRight();
  }
}
