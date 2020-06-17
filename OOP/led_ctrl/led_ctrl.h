#ifndef
_UNTITLED_H_
#define
_UNTITLED_H_

class Led {

private:
    byte pin;
    bool status;

public:

    Led(byte pin);

    void init();

    void on();

    void off();

    void blink(unsigned int time, byte times);

    void blinkOnce();

    void toggle();

    bool getState();
};

#endif //_UNTITLED_H_
