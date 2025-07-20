#pragma once
#include <iostream>
#include <string>
using namespace std;

class bicycle : public carbonFootrprint {
    private:
    int rideLength; // miles (65 calories/mi) = GRAMS
    char diet; //plant (cal x 1) meat (cal x 5)

    public:
    bicycle();
    bicycle(int, char);
};

class building : public carbonFootrprint {
    private:
    int electricUsage; //KWH x 0.39 + KILOGRAMS
    int gasUsage; //Cubic meter x 0.0544 KILOGRAMS
    int waterUsage; //Gallons x 0.002 = KILOGRAMS

    public:
    building();
    building(int, int, int);
};

class car : public carbonFootrprint {
    private:
    float fuelEconomy;
    int miles;
    char fuel; //Gas ((miles/mpg)x8.89) Diesel ((miles/mpg)x10.16) = KILOGRAMS

    public:
    car();
    car(float, int, char);
};

class carbonFootrprint {
    public:
    
};