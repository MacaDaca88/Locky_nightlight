//input D2

void SOUNDsensor() {

  int sound = digitalRead(SOUND);
  if (sound == 1) {
    clap = true;
    if (clap == true && sound == true) {
      clap == false;
    }
  }
}