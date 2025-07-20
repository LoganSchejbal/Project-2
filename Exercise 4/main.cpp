#include <iostream>
#include "employee.h" // Includes all necessary class declarations

int main() {
    // Create Employee object
    Benefit b1("Premium Health", 100000, 15);
    Employee e1("John", "Doe", 'M', 2, 50000, b1);
    std::cout << "\n--- Employee Object ---" << std::endl;
    std::cout << "Number of Employees: " << Employee::getNumEmployees() << std::endl;
    e1.displayEmployee();
    std::cout << "-----------------------" << std::endl;

    // Test setters for Employee
    e1.setFirstName("Jonathan");
    e1.setAnnualSalary(55000);
    std::cout << "\n--- Employee Object (after updates) ---" << std::endl;
    e1.displayEmployee();
    std::cout << "-------------------------------------" << std::endl;

    // Create Salaried object
    Benefit b2("Standard Health", 50000, 10);
    Salaried s1("Alice", "Smith", 'F', 1, 60000, b2, 2);
    std::cout << "\n--- Salaried Object ---" << std::endl;
    std::cout << "Number of Employees: " << Employee::getNumEmployees() << std::endl;
    s1.displayEmployee();
    std::cout << "-----------------------" << std::endl;

    // Test setters for Salaried (inherited)
    s1.setLastName("Williams");
    std::cout << "\n--- Salaried Object (after updates) ---" << std::endl;
    s1.displayEmployee();
    std::cout << "-------------------------------------" << std::endl;

    // Create Hourly object
    Benefit b3("Basic Health", 25000, 5);
    Hourly h1("Bob", "Johnson", 'M', 0, 0, b3, "part time", 20, 30);
    // Explicitly call setAnnualSalary to update it based on hourly pay
    h1.setAnnualSalary(0); // Pass a dummy value, as the method calculates it internally
    std::cout << "\n--- Hourly Object ---" << std::endl;
    std::cout << "Number of Employees: " << Employee::getNumEmployees() << std::endl;
    h1.displayEmployee();
    std::cout << "---------------------" << std::endl;

    // Test setters for Hourly (inherited and overridden)
    h1.setFirstName("Robert");
    h1.setAnnualSalary(0); // Recalculate based on current hours/wage
    std::cout << "\n--- Hourly Object (after updates) ---" << std::endl;
    h1.displayEmployee();
    std::cout << "-----------------------------------" << std::endl;

    return 0;
}
