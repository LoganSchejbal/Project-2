#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream> // For std::cout in displayEmployee (even though it's an implementation detail, it's often included in headers for convenience if methods are inlined or for virtual functions)

// Benefit Class Declaration
class Benefit {
private:
    std::string healthInsurance;
    int lifeInsurance;
    int vacation;

public:
    Benefit(std::string h = "not given", int l = 0, int v = 0);

    // Getters
    std::string getHealthInsurance() const;
    int getLifeInsurance() const;
    int getVacation() const;

    // Setters
    void setHealthInsurance(std::string h);
    void setLifeInsurance(int l);
    void setVacation(int v);
};

// Employee Class Declaration
class Employee {
protected:
    std::string firstName;
    std::string lastName;
    char gender;
    int dependents;
    double annualSalary;
    Benefit benefit; // Composition: Employee has a Benefit
    static int numEmployees;

public:
    // Constructors
    Employee();
    Employee(std::string f, std::string l, char g, int d, double s, Benefit b);

    // Virtual destructor for proper polymorphic cleanup
    virtual ~Employee();

    // Getters
    std::string getFirstName() const;
    std::string getLastName() const;
    char getGender() const;
    int getDependents() const;
    double getAnnualSalary() const;
    Benefit getBenefit() const;

    // Setters
    void setFirstName(std::string f);
    void setLastName(std::string l);
    void setGender(char g);
    void setDependents(int d);
    virtual void setAnnualSalary(double s); // Virtual for Hourly override
    void setBenefit(Benefit b);

    // Virtual methods for polymorphism
    virtual double calculatePay() const;
    virtual void displayEmployee() const;

    // Static method
    static int getNumEmployees();
};

// Salaried Class Declaration
class Salaried : public Employee { // Inheritance
private:
    int managementLevel;
    static constexpr double BONUS_PERCENT = 0.10;
    static const int MAX_LEVEL = 3;

public:
    // Constructor
    Salaried(std::string f, std::string l, char g, int d, double s, Benefit b, int m);

    // Overridden virtual methods
    double calculatePay() const override;
    void displayEmployee() const override;
};

// Hourly Class Declaration
class Hourly : public Employee { // Inheritance
private:
    std::string category;
    double wage;
    double hours;
    static const int MAX_HOURS = 50;
    static const int MIN_HOURS = 0;
    static const int MIN_WAGE = 10;
    static const int MAX_WAGE = 75;

public:
    // Constructor
    Hourly(std::string f, std::string l, char g, int d, double s, Benefit b,
           std::string cat, double w, double h);

    // Overridden virtual methods
    double calculatePay() const override;
    void setAnnualSalary(double s) override; // Overrides Employee's setAnnualSalary
    void displayEmployee() const override;
};

#endif // EMPLOYEE_H
