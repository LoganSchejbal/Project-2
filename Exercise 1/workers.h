#pragma once
#include <string>
#include <iostream>
using namespace std;

class employee{
    private:
    int ID;
    string name;
    double age;
    string education;

    public:
    employee();
    employee(int, string, double, string);
    int getID();
    void setID(int);
    string getName();
    void setName(string);
    double getAge();
    void setAge(double);
    string getEducation();
    void setEducation(string);
};

class worker : public employee {
    private:
    string hiringDate;
    string dept;
    float rate;

    public:
    worker();
    worker(int, string, double, string, string, string, float);
    string getHiringDate();
    void setHiringDate(int, int, int);
    string getDept();
    void setDept(string);
    float getRate();
    void setRate(float);
    void displayInfo();
};

class manager : employee {
    private:
    string promoDate;
    string dept;
    string title;
    float salary;

    public:
    manager();
    manager(int, string, double, string, string, string, string, float);
    string getPromoDate();
    void setPromoDate(string);
    string getDept();
    void setDept(string);
    string getTitle();
    void setTitle(string);
    float getSalary();
    void setSalary(float);
    void displayInfo();
};