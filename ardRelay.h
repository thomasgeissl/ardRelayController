#pragma once
#include <arduino.h>

class ardRelay{
public:
    ardRelay();
    ardRelay(unsigned int pinUI);
    void setPin(unsigned int pinUI);
    void setClosed(bool valueB = true);
    void toggle();

    bool isClosed();

    unsigned int getPin();
protected:
private:
    unsigned int _pinUI;
    bool _closedB;
};
