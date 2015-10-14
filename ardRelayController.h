#pragma once
#include <StandardCplusplus.h>
#include <vector>
#include "ardRelay.h"

using namespace std;
class ardRelayController{
public:
    void setRelayClosed(unsigned int index, bool value = true);
    void setRelaysClosed(bool value = true);
    void toggleRelay(unsigned int index);
    void toggleRelays();

    void addRelay(unsigned int pinUI);
    void addRelays(vector<unsigned int> pinsUI);

    ardRelay getRelay(unsigned int index);
    bool isRelayClosed(unsigned int index);
protected:
private:
    vector<ardRelay> _relayVec;
};
