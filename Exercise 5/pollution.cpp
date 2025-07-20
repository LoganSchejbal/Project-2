#include <iostream>
#include <string>
#include "pollution.h"
using namespace std;

bicycle::bicycle(int tempLength, char tempDiet){
    rideLength = tempLength;
    diet = tempDiet;
}

building::building(int tempElectric, int tempGas, int tempWater){
    electricUsage = tempElectric;
    gasUsage = tempGas;
    waterUsage = tempWater;
}

car::car(float tempEconomy, int tempMiles, char tempFuel){
    fuelEconomy = tempEconomy;
    miles = tempMiles;
    fuel = tempFuel;
}