//input D2



void SOUNDsensor() {
  int sound = digitalRead(SOUND);

  if (sound == HIGH) {
    if (!clap) {
      clap = true;
      LEDstate = !LEDstate;  // Toggle LED state
      delay(10);  // Debounce delay to avoid multiple triggers from one clap
    }
  } else {
    clap = false;  // Reset clap state when no sound is detected
  }
}
