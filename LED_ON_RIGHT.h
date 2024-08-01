//pin 9 nano
// pin 1 tin85



void ledOnRight() {
  unsigned long TimeR = millis();
  if (TimeR - oldTimeR >= timerR) {
    oldTimeR = TimeR;
    //Serial.print("Right time : ");
    //Serial.println(TimeR);
    if (LEDright == true) {
      brightnessR -= fadeAmount;
      if (brightnessR >= 255 || brightnessR <= 0) {
        fadeAmount = +fadeAmount;  // reverse direction of fade
        brightnessR = constrain(brightnessR, 255, 0);
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