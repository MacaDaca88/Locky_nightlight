//10k Input GND
//LDR V+
//Input A2



void LDRsensor() {

  int ldr = analogRead(LDR);  // set ldr as analog input
  if (clap == true) {
    if (ldr <= LIGHTING) {  // check ldr vs light threshold
      LEDstate = true;      // set led state to on
                            // Serial.println(ldr);
    } else {
      LEDstate = false;  // set led state to off
    }
  }

  if (LEDstate == false) {  // set all leds off
    //Serial.println(LEDstate);
    LEDleft = false;   // set left leds off
    LEDright = false;  // set right leds off
  } else {             // leds can turn on as per normal functions
                       // Serial.println(LEDstate);
    LEDleft = true;    // set left led state on
    LEDright = true;   // set right led state on
  }
}