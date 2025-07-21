#include <iostream>
#include <string>
#include <vector>
#include "pollution.h"
using namespace std;

int main() {
    int rideLength = 0;
    while (true){
        cout << "Please Enter the ride lenght of the bike ride in miles: ";
        cin >> rideLength;
        if (rideLength == 0){
            cout << "Input must be a number greater than 0" << endl;
        }
        else {
            break;
        }
    }

    char diet;
    while (true){
        cout << "Please enter 'p' for a plant-based diet and a 'm' for a meat-based diet: ";
        cin >> diet;
        if (diet == 'p' || diet == 'm'){
            break;
        }
        else {
            cout << "Input must be 'p' or 'm'" << endl;
        }
    }

    //building
    int electricityUsage = 0;
    while (true){
                cout << "Please Enter the electricity usage of the building in KWH: ";
        cin >> electricityUsage;
        if (electricityUsage == 0){
            cout << "Input must be a number greater than 0" << endl;
        }
        else {
            break;
        }
    }

    int gasUsage = 0;
    while (true){
                cout << "Please Enter the gas usage of the building in cubic meters: ";
        cin >> gasUsage;
        if (gasUsage == 0){
            cout << "Input must be a number greater than 0" << endl;
        }
        else {
            break;
        }
    }

    int waterUsage = 0;
    while (true){
                cout << "Please Enter the water usage of the building in cubic meters: ";
        cin >> waterUsage;
        if (waterUsage == 0){
            cout << "Input must be a number greater than 0" << endl;
        }
        else {
            break;
        }
    }

    //car
    float fuelEconomy = 0;
    while (true){
                cout << "Please Enter the Mileage per Gallon of the car: ";
        cin >> fuelEconomy;
        if (fuelEconomy == 0){
            cout << "Input must be a number greater than 0" << endl;
        }
        else {
            break;
        }
    }

    int miles = 0;
    while (true){
                cout << "Please Enter the miles travelled in the car: ";
        cin >> miles;
        if (miles == 0){
            cout << "Input must be a number greater than 0" << endl;
        }
        else {
            break;
        }
    }

    char fuel;
    while (true){
        cout << "Please enter 'g' for a gasoline powered car or a 'd' for a diesel powered car: ";
        cin >> fuel;
        if (fuel == 'd' || fuel == 'g'){
            break;
        }
        else {
            cout << "Input must be 'd' or 'g'" << endl;
        }
    }

    //Creating objects and storing
    Bicycle bike (rideLength, diet);
    Building structure (electricityUsage, gasUsage, waterUsage);
    Car vehicle (fuelEconomy, miles, fuel);

    vector <CarbonFootprint*> objects;
    objects.push_back(&bike);
    objects.push_back(&structure);
    objects.push_back(&vehicle);

    //calling getCarbonFootprint
    for (auto obj : objects) {
        obj->getCarbonFootprint(); // polymorphic call
    }

    return 0;
}
