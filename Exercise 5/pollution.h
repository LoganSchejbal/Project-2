#pragma once
#include <string>

class CarbonFootprint {
public:
    virtual int getCarbonFootprint() const = 0; // pure virtual
    virtual ~CarbonFootprint() {} // virtual destructor
};

class Bicycle : public CarbonFootprint {
private:
    int rideLength; // miles (65 calories/mi)
    char diet;       // 'p' plant-based, 'm' meat-based

public:
    Bicycle(int, char);
    virtual int getCarbonFootprint() const;
};

class Building : public CarbonFootprint {
private:
    int electricUsage; // KWH
    int gasUsage;      // cubic meters
    int waterUsage;    // cubic meters

public:
    Building(int, int, int);
    virtual int getCarbonFootprint() const;
};

class Car : public CarbonFootprint {
private:
    float fuelEconomy; // MPG
    int miles;
    char fuel;          // 'g' gasoline, 'd' diesel

public:
    Car(float, int, char);
    virtual int getCarbonFootprint() const;
};
