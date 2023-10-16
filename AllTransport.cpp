#include "AllTransport.h"

AllTransport::AllTransport(double tank, double petrol) {
    tank_volume = tank;
    petrol_amount = petrol;
}

double AllTransport::getTank()
{
    return tank_volume;
}

double AllTransport::getPetrol()
{
    return petrol_amount;
}
