#include "ardRelay.h"
ardRelay::ardRelay(){}
ardRelay::ardRelay(unsigned int pinUI){
    _pinUI = pinUI;
    pinMode(_pinUI, OUTPUT);
}
void ardRelay::setPin(unsigned int pinUI){
    _pinUI = pinUI;
}
void ardRelay::setClosed(bool valueB){
    _closedB = valueB;
    if(_closedB){
        digitalWrite(_pinUI, HIGH);
    }else{
        digitalWrite(_pinUI, LOW);
    }
}
void ardRelay::toggle(){
    setClosed(!_closedB);
}
bool ardRelay::isClosed()
{
    return _closedB;
}
unsigned int ardRelay::getPin()
{
    return _pinUI;
}

