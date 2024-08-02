//input D2

void SOUNDsensor() {

  int sound = digitalRead(SOUND);

  if (sound == 1) {
    if (clap == false) { // toggle clap state on or off
      clap = true;
    }
  } else {
    clap = false;  // Reset clap state when no sound is detected
  }
}
