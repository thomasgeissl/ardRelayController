#include <StandardCplusplus.h>
#include <ardRelayController.h>

ardRelayController _controller;
void setup(){
  //add a relay to be managed by the controller by giving the assigned pin
  _controller.addRelay(2);
  //or add multiple relays by giving a vector of pins
  std::vector<unsigned int> pins;
  for(unsigned int i = 0; i < 7; i++){
    pins.push_back(i+3);
  }
  _controller.addRelays(pins);
  
}

void loop(){
  //close relays at index 0, 1 high
  _controller.setRelayClosed(0, true);
  _controller.setRelayClosed(1);
  delay(1000);
  
  //toggle relays at index 0,1
  _controller.toggleRelay(0);
  _controller.toggleRelay(1);
  delay(1000);
  
  //close all relays
  _controller.setRelaysClosed(true);
  delay(1000);
  
  //open all relays
  _controller.setRelaysClosed(false);
  delay(1000);
  
  //close all relays
  _controller.setRelaysClosed();
  delay(1000);
  
  //toggle all relays
  _controller.toggleRelays();
  delay(1000);
}
