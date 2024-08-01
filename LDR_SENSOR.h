void LDRsensor() {

  int ldr = analogRead(LDR);  // set ldr as analog input
  if (ldr <= LIGHTING) {      // check ldr vs light threshold
    LEDon = true;             // set led state to on
  } else {
    LEDon = false;  // set led state to off
  }
  if (LEDon == false) {  // set all leds off
    LEDonR = false;      // set right leds off
    LEDonL = false;      // set left leds off
  }
}