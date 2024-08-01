void ledOnRight() {
  unsigned long TimeR = millis();

  if (TimeR - oldTimeR >= timerR) {
    oldTimeR = TimeR;
    LEDonR = true;  // set right led state on
    Serial.print("Right time : ");
    Serial.println(TimeR);
    if (LEDonR) {
      LEDonL = false;  // set left led state off
      brightnessR += fadeAmount;

      if (brightnessR <= 0 || brightnessR >= 255) {
        fadeAmount = -fadeAmount;  // reverse direction of fade
      }

      analogWrite(LED_RIGHT, brightnessR);
    } else {
      analogWrite(LED_RIGHT, 0);  // turn off right leds
    }
  }
}