#include
"led_ctrl.h"

Led::Led(byte pin) {
    this->pin = pin;
    this->status=LOW;
    pinMode(this->pin,OUTPUT);
    init();
}
void Led::init() {
    pinMode(pin, OUTPUT);
    off();
}
void Led::on() {
    digitalWrite(pin, HIGH);
    this->status=true;
}
void Led::off() {
    digitalWrite(pin, LOW);
    this->status=false;
}

void Led::toggle(){
    status ? off() : on();
}

void Led::blinkOnce(){
    toggle();
    delay(1000);
    toggle();
    delay(1000);
}

void Led::blink(unsigned int time, byte times){
    for (byte i=0; i<times; i++){
        toggle();
        delay(time/2);
        toggle();
        delay(time/2);
    }
}

bool Led::getState(){ return status; }
