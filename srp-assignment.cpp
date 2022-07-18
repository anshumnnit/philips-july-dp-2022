//C++ Code
bool batteryIsOk(float temperature, float soc, float chargeRate) {
  if(temperature < 0 || temperature > 45) {
    cout << "Temperature out of range!\n";
    return false;
  } else if(soc < 20 || soc > 80) {
    cout << "State of Charge out of range!\n";
    return false;
  } else if(chargeRate > 0.8) {
    cout << "Charge Rate out of range!\n";
    return false;
  }
  return true;
}

Observations:
Code voilates Single responsibility principle.
Responsibility of temp, SOCCharge and chargeRate can be divided into 3 functions
