//pin 9 nano
// pin 1 tin85



void ledOnRight() {
  unsigned long TimeR = millis();

  if (LEDright == true) {
    // LEDleft = false;  // set left led state off
    if (TimeR - oldTimeR >= timerR) {
      oldTimeR = TimeR;
      // Serial.print("Right time : ");
      // Serial.println(TimeR);
      brightnessR += fadeAmount;
      if (brightnessR <= 50 || brightnessR >= 255) {
        fadeAmount = -fadeAmount;  // reverse direction of fade
      }
      analogWrite(LED_RIGHT, brightnessR);
    } else {
      Serial.println("Right Off");
      digitalWrite(LED_RIGHT, 0);  // turn off right leds
    }
  }
}