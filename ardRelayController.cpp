#include "ardRelayController.h"
void ardRelayController::setRelayClosed(unsigned int index, bool value){
    _relayVec[index].setClosed(value);

}
void ardRelayController::setRelaysClosed(bool value){
    for(int index = 0; index < _relayVec.size(); index++){
        _relayVec[index].setClosed(value);
    }
}
void ardRelayController::toggleRelay(unsigned int index){
    _relayVec[index].toggle();
}
void ardRelayController::toggleRelays(){
    for(int index = 0; index < _relayVec.size(); index++){
        _relayVec[index].toggle();
    }
}

void ardRelayController::addRelay(unsigned int pinUI){
    _relayVec.push_back(ardRelay(pinUI));
}
void ardRelayController::addRelays(vector<unsigned int> pinUIVec){
    for(int i = 0; i < pinUIVec.size(); i++)
    {
        _relayVec.push_back(ardRelay(pinUIVec[i]));
    }
}
ardRelay ardRelayController::getRelay(unsigned int index)
{
    return _relayVec[index];
}
bool ardRelayController::isRelayClosed(unsigned int index)
{
    return _relayVec[index].isClosed();
}
