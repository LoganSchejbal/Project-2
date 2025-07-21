#include <iostream>
#include <string>
#include "pollution.h"
using namespace std;

Bicycle::Bicycle(int tempLength, char tempDiet) {
    rideLength = tempLength;
    diet = tempDiet;
}

int Bicycle::getCarbonFootprint() const {
    int calories = rideLength * 65;
    int footprint = 0;
    if (diet == 'p') {
        footprint = calories / 1000;
    } else if (diet == 'm') {
        footprint = calories * 5 / 1000;
    }
    cout << "[Bicycle] Ride Length: " << rideLength << " miles, Diet: " << (diet == 'p' ? "Plant-based" : "Meat-based")
         << " ➔ Estimated Carbon Footprint: " << footprint << " kg CO2" << endl;
    return footprint;
}

Building::Building(int tempElectric, int tempGas, int tempWater) {
    electricUsage = tempElectric;
    gasUsage = tempGas;
    waterUsage = tempWater;
}

int Building::getCarbonFootprint() const {
    int footprint = static_cast<int>(electricUsage * 0.39 + gasUsage * 0.0544 + waterUsage * 0.002);
    cout << "[Building] Electricity: " << electricUsage << " kWh, Gas: " << gasUsage
         << " m³, Water: " << waterUsage << " m³ ➔ Estimated Carbon Footprint: "
         << footprint << " kg CO2" << endl;
    return footprint;
}

Car::Car(float tempEconomy, int tempMiles, char tempFuel) {
    fuelEconomy = tempEconomy;
    miles = tempMiles;
    fuel = tempFuel;
}

int Car::getCarbonFootprint() const {
    int footprint = 0;
    if (fuel == 'g') {
        footprint = static_cast<int>((miles / fuelEconomy) * 8.89);
    } else if (fuel == 'd') {
        footprint = static_cast<int>((miles / fuelEconomy) * 10.16);
    }
    cout << "[Car] Miles: " << miles << ", Fuel Economy: " << fuelEconomy
         << " MPG, Fuel Type: " << (fuel == 'g' ? "Gasoline" : "Diesel")
         << " ➔ Estimated Carbon Footprint: " << footprint << " kg CO2" << endl;
    return footprint;
}
