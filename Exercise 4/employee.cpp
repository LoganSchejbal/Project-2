#include "employee.h" // Includes all class declarations
#include <iostream>   // For input/output operations

// Initialize the static member for Employee count
int Employee::numEmployees = 0;

// --- Benefit Class Implementations ---
Benefit::Benefit(std::string h, int l, int v)
    : healthInsurance(h), lifeInsurance(l), vacation(v) {}

std::string Benefit::getHealthInsurance() const { return healthInsurance; }
int Benefit::getLifeInsurance() const { return lifeInsurance; }
int Benefit::getVacation() const { return vacation; }

void Benefit::setHealthInsurance(std::string h) { healthInsurance = h; }
void Benefit::setLifeInsurance(int l) { lifeInsurance = l; }
void Benefit::setVacation(int v) { vacation = v; }

// --- Employee Class Implementations ---
Employee::Employee()
    : firstName("not given"), lastName("not given"), gender('U'),
      dependents(0), annualSalary(20000) {
    numEmployees++;
}

Employee::Employee(std::string f, std::string l, char g, int d, double s, Benefit b)
    : firstName(f), lastName(l), gender(g), dependents(d), annualSalary(s), benefit(b) {
    numEmployees++;
}

Employee::~Employee() {
    // No specific dynamic memory to deallocate in this example, but good practice to have.
}

// Getters
std::string Employee::getFirstName() const { return firstName; }
std::string Employee::getLastName() const { return lastName; }
char Employee::getGender() const { return gender; }
int Employee::getDependents() const { return dependents; }
double Employee::getAnnualSalary() const { return annualSalary; }
Benefit Employee::getBenefit() const { return benefit; }

// Setters
void Employee::setFirstName(std::string f) { firstName = f; }
void Employee::setLastName(std::string l) { lastName = l; }
void Employee::setGender(char g) { gender = g; }
void Employee::setDependents(int d) { dependents = d; }
void Employee::setAnnualSalary(double s) { annualSalary = s; }
void Employee::setBenefit(Benefit b) { benefit = b; }

// Virtual methods
double Employee::calculatePay() const {
    return annualSalary / 52;
}

void Employee::displayEmployee() const {
    std::cout << "Name: " << firstName << " " << lastName << std::endl;
    std::cout << "Gender: " << gender << std::endl;
    std::cout << "Dependents: " << dependents << std::endl;
    std::cout << "Annual Salary: $" << annualSalary << std::endl;
    std::cout << "Weekly Pay: $" << calculatePay() << std::endl;
    std::cout << "Benefit Info - Health: " << benefit.getHealthInsurance()
              << ", Life: " << benefit.getLifeInsurance()
              << ", Vacation: " << benefit.getVacation() << " days" << std::endl;
}

int Employee::getNumEmployees() {
    return numEmployees;
}

// --- Salaried Class Implementations ---
Salaried::Salaried(std::string f, std::string l, char g, int d, double s, Benefit b, int m)
    : Employee(f, l, g, d, s, b), managementLevel(m) {
    if (managementLevel < 0 || managementLevel > MAX_LEVEL) {
        managementLevel = 0;
    }
}

double Salaried::calculatePay() const {
    double bonus = managementLevel * BONUS_PERCENT;
    return (annualSalary / 52) * (1 + bonus);
}

void Salaried::displayEmployee() const {
    Employee::displayEmployee(); // Call base class display
    std::cout << "Management Level: " << managementLevel << std::endl;
}

// --- Hourly Class Implementations ---
Hourly::Hourly(std::string f, std::string l, char g, int d, double s, Benefit b,
               std::string cat, double w, double h)
    : Employee(f, l, g, d, s, b), category(cat), wage(w), hours(h) {
    if (hours <= MIN_HOURS || hours >= MAX_HOURS) hours = 0;
    if (wage < MIN_WAGE || wage > MAX_WAGE) wage = MIN_WAGE;
}

double Hourly::calculatePay() const {
    return wage * hours;
}

void Hourly::setAnnualSalary(double s) {
    // Annual salary for hourly is derived from weekly pay * 50
    annualSalary = calculatePay() * 50;
}

void Hourly::displayEmployee() const {
    Employee::displayEmployee(); // Call base class display
    std::cout << "Category: " << category << std::endl;
}
