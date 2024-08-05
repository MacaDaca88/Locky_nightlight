//10k Input GND
//LDR V+
//Input A1



void LDRsensor() {
  int ldr = analogRead(LDR);  // Read the LDR value

  if (ldr <= LIGHTING) {  // Check if it's dark enough
    //  LEDstate = !LEDstate;  // Toggle LED state

    // Debugging output
   // Serial.print("LDR  :  ");
   // Serial.println(ldr);
    if (LEDstate) {     // If LEDs should be on
      LEDleft = true;   // Turn on left LEDs
      LEDright = true;  // Turn on right LEDs
    } else {
      LEDleft = false;   // Turn off left LEDs
      LEDright = false;  // Turn off right LEDs
    }
  } else {             // If it's not dark enough
    LEDleft = false;   // Ensure left LEDs are off
    LEDright = false;  // Ensure right LEDs are off
  }
}
