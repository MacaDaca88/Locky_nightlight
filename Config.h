


#ifdef AVR
#define LED_LEFT 10  // left led bank pwm pin 10 nano
#define LED_RIGHT 9  // right led bank pwm pin 9 nano

#else
#define LED_LEFT 0   // left led bank pwm pin 10 nano
#define LED_RIGHT 1  // right led bank pwm pin 9 nano
#endif
#define LDR A2  // ldr sensor pin

#define LIGHTING 200  // threshold for ambient light to trigger leds on

bool LEDstate = false;  // led on
bool LEDleft = false;   // left led on
bool LEDright = false;  // right led on

unsigned long oldTimeL = 0;  // stores the last time Left LEDs were updated
unsigned long oldTimeR = 0;  // stores the last time Right LEDs were updated

const long timerL = 10;  // interval at which to update LEDs (in milliseconds)
const long timerR = 5;  // interval at which to update LEDs (in milliseconds)

int fadeAmount = 5;             // amount by which to fade the LED
unsigned long brightnessL = 255;  // current brightness for left LED
unsigned long brightnessR = 0;  // current brightness for right LED

void startup() {  // run once at startup
  //Serial.begin(9600);

  pinMode(LED_LEFT, OUTPUT);   // set left leds output
  pinMode(LED_RIGHT, OUTPUT);  // set right leds output
  pinMode(LDR, INPUT);         // set ldr as input
  digitalWrite(LED_LEFT, 1);   // test left bank triggers on
  delay(500);                  // wait 500ms
  digitalWrite(LED_LEFT, 0);   // test left bank triggers off
  delay(500);                  // wait 500ms
  digitalWrite(LED_RIGHT, 1);  // test right bank triggers on
  delay(500);                  // wait 500ms
  digitalWrite(LED_RIGHT, 0);  // test right bank triggers off
  delay(500);                  // wait 500ms
}