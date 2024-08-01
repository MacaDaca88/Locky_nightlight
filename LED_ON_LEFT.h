//pin 10 nano
// pin 0 tin85



void ledOnLeft() {
  unsigned long TimeL = millis();

  if (LEDleft == true) {
    //LEDright = false;  // set left led state off
    if (TimeL - oldTimeL >= timerL) {
      oldTimeL = TimeL;
      //  Serial.print("left  time : ");
      //  Serial.println(oldTimeL);
      brightnessL += fadeAmount;
      if (brightnessL <= 50 || brightnessL >= 255) {
        fadeAmount = -fadeAmount;  // reverse direction of fade
      }
      analogWrite(LED_LEFT, brightnessL);
    } else {
      Serial.println("Left Off");
      digitalWrite(LED_LEFT, 0);  // set left led state off
    }
  }
}