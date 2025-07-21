#include <iostream>
#include <string>
#include "pollution.h"
using namespace std;

bicycle::bicycle(int tempLength, char tempDiet){
    rideLength = tempLength;
    diet = tempDiet;
}
int bicycle::getCarbonFootprint() const {
    int calories = rideLength * 65;
    if (diet == 'p') {
        return calories / 1000;
    } else if (diet == 'm') {
        return calories * 5 / 1000;
    }
    return 0;
}


building::building(int tempElectric, int tempGas, int tempWater){
    electricUsage = tempElectric;
    gasUsage = tempGas;
    waterUsage = tempWater;
}
int building::getCarbonFootprint() const {
    return static_cast<int>(electricUsage * 0.39 + gasUsage * 0.0544 + waterUsage * 0.002);
}



car::car(float tempEconomy, int tempMiles, char tempFuel){
    fuelEconomy = tempEconomy;
    miles = tempMiles;
    fuel = tempFuel;
}
int car::getCarbonFootprint() const {
    if (fuel == 'g') {
        return static_cast<int>((miles / fuelEconomy) * 8.89);
    } else if (fuel == 'd') {
        return static_cast<int>((miles / fuelEconomy) * 10.16);
    }
    return 0; // Default case if fuel type is unknown
}