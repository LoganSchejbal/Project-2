#include <iostream>
#include <string>
#include "workers.h"
using namespace std;

//Employee Class Functions
employee::employee(){

}
employee::employee(int tempID, string tempName, double tempAge, char tempGender, string tempEdu){
    ID = tempID;
    name = tempName;
    age = tempAge;
    gender = tempGender;
    education = tempEdu;
}
int employee::getID(){
    return ID;
}
void employee::setID(int tempID){
    ID = tempID;
    return;
}
string employee::getName(){
    return name;
}
void employee::setName(string tempName){
    name = tempName;
    return;
}
double employee::getAge(){
    return age;
}
void employee::setAge(double tempAge){
    age = tempAge;
    return;
}
char employee::getGender(){
    return gender;
}
void employee::setGender(char tempGender){
    gender = tempGender;
    return;
}
string employee::getEducation(){
    return education;
}
void employee::setEducation(string tempEdu){
    education = tempEdu;
    return;
}

//Worker Class Functions
worker::worker() : employee(){

}
worker::worker(int tempID, string tempName, double tempAge, char tempGender, string tempEdu, string tempDate, string tempDept, float tempRate) : employee(tempID, tempName, tempAge, tempGender, tempEdu){
    hiringDate = tempDate;
    dept = tempDept;
    rate = tempRate;
    return;
}
string worker::getHiringDate(){
    return hiringDate;
}
void worker::setHiringDate(int month, int day, int year){
    hiringDate = to_string(month) + "/" + to_string(day) + "/" + to_string(year);
    return;
}
string worker::getDept(){
    return dept;
}
void worker::setDept(string tempDept){
    dept = tempDept;
    return;
}
float worker::getRate(){
    return rate;
}
void worker::setRate(float tempRate){
    rate = tempRate;
    return;
}
void worker::displayInfo(){
    cout << "Employee ID: " << getID() 
        << "\nName: " << getName()
        << "\nAge: " << getAge()
        << "\nGender: " << getGender()
        << "\nEducation: " << getEducation()
        << "\nDate Hired: " << getHiringDate()
        << "\nDepartment: " << getDept()
        << "\nRate: $" << getRate() << "\n" << endl;
        return;
}

//Manager Class Functions
manager::manager() : employee(){

}
manager::manager(int tempID, string tempName, double tempAge, char tempGender, string tempEdu, string tempDate, string tempDept, string tempTitle, float tempSalary) : employee(tempID, tempName, tempAge, tempGender, tempEdu){
    promoDate = tempDate;
    dept = tempDept;
    title = tempTitle;
    salary = tempSalary;
    return;
}

string manager::getPromoDate(){
    return promoDate;
}
void manager::setPromoDate(string tempDate){
    promoDate = tempDate;
    return;
}
string manager::getDept(){
    return dept;
}
void manager::setDept(string tempDept){
    dept = tempDept;
    return;
}
string manager::getTitle(){
    return title;
}
void manager::setTitle(string tempTitle){
    title = tempTitle;
    return;
}
float manager::getSalary(){
    return salary;
}
void manager::setSalary(float tempSalary){
    salary = tempSalary;
}
void manager::displayInfo(){
        cout << "Employee ID: " << getID() 
        << "\nName: " << getName()
        << "\nAge: " << getAge()
        << "\nGender: " << getGender()
        << "\nEducation: " << getEducation()
        << "\nDate Promoted: " << getPromoDate()
        << "\nDepartment: " << getDept()
        << "\nSalary: $" << getSalary() << "\n" << endl;
        return;
}