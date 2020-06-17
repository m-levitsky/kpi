#include
<Arduino.h>
#include
"led_ctrl.h"

#define LED_PIN 13

Led led(LED_PIN);

void setup() { }

void loop() {

    led.blink();
}