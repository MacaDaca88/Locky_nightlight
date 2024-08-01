void ledOnLeft() {
  unsigned long TimeL = millis();

  if (TimeL - oldTimeL >= timerL) {
    oldTimeL = TimeL;
    LEDonL = true;  // set left led state on
    Serial.print("left  time : ");
    Serial.println(TimeL);
    if (LEDonL) {
      LEDonR = false;  // set left led state off
      brightnessL += fadeAmount;

      if (brightnessL <= 0 || brightnessL >= 255) {
        fadeAmount = -fadeAmount;  // reverse direction of fade
      }

      analogWrite(LED_LEFT, brightnessL);
    } else {
      analogWrite(LED_LEFT, 0);  // set left led state off
    }
  }
}