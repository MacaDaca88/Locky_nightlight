//pin 9 nano
// pin 1 tin85



void ledOnRight() {
  unsigned long TimeR = millis();
  if (TimeR - oldTimeR >= timerR) {
    oldTimeR = TimeR;
    if (LEDright == true) {
      // LEDleft = false;  // set left led state off
      //      Serial.print("Right time : ");
      //  Serial.println(TimeR);
      brightnessR += fadeAmount;
      if (brightnessR <= 0 || brightnessR >= 255) {
        fadeAmount = -fadeAmount;  // reverse direction of fade
        brightnessR = constrain(brightnessR, 0, 255);
      }
      //Serial.print("brightness Right : ");
      //Serial.println(brightnessR);
      analogWrite(LED_RIGHT, brightnessR);
    } else {
      //Serial.println("Right Off");
      digitalWrite(LED_RIGHT, 0);  // turn off right leds
    }
  }
}