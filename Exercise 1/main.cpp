#include <iostream>
#include <string>
#include <cstdlib>
#include "workers.cpp"
using namespace std;

int workerCount = 0;
int managerCount = 0;
manager man1, man2, man3;
worker work1, work2, work3, work4, work5;

void createManager(int ID, string name, double age, char gender, string education, string date, string dept, string title, int salary){
    manager tempMan(ID, name, age, gender, education, date, dept, title, salary);
    if (managerCount == 0){
        man1 = tempMan;
    }
    else if (managerCount == 1){
        man2 = tempMan;
    }
    else if (managerCount == 2){
        man3 = tempMan;
    }
    else{
        cout << "Maximum number of managers reached. Returning to previous page.\n" <<endl;
        return;
    }
    ++managerCount;
}

void createWorker(int ID, string name, double age, char gender, string education, string date, string dept, float rate){
    worker tempWork(ID, name, age, gender, education, date, dept, rate);
    if (workerCount == 0){
        work1 = tempWork;
    }
    else if (workerCount == 1){
        work2 = tempWork;
    }
    else if (workerCount == 2){
        work3 = tempWork;
    }
    else if (workerCount == 3){
        work4 = tempWork;
    }
    else if (workerCount == 4){
        work5 = tempWork;
    }
    else{
        cout << "Maximum number of workers reached. Returning to previous page.\n" <<endl;
        return;
    }
    ++workerCount;
}

void workerMenu(){
    char input;
    while(true){
        cout << "Worker Menu\n"
            << "To add a new worker, enter 'n'\n"
            << "To view a worker, enter 'v'\n"
            << "To edit a worker, enter 'e'\n"
            << "To go back, enter 'b'\n" <<endl;
        cin >> input;

        if (input == 'n'){
            if (workerCount <= 4){
                int ID, month, day, year = 0;
                string first, last, education, dept, date, name;
                double age = 0;
                float rate = 0;
                char gender;

                cout << "Employee ID: " << endl;
                cin >> ID;
                if (ID >= 100000000 && ID <= 999999999) {
                
                } 
                else {
                    cout << "ID must be exactly 9 digits." << endl;
                    return;
                }
                cout << "Employee Name (First Last): " << endl;
                cin >> first >> last;
                name = first + " " + last;
                if (name.length() > 30){
                    cout << "Error, Name may not exceed 30 characters" << endl;
                    return;
                }
                else{
                    
                }
                cout << "Age: " << endl;
                cin >> age;
                if (age >= 10 && age <= 99) {
                
                } 
                else {
                    cout << "Age must be exactly 2 digits." << endl;
                    return;
                }
                cout << "Gender (ie M or F): " << endl;
                cin >> gender;
                cout << "Education (Abbreviation, ie MD or HS): " << endl;
                cin >> education;
                if (education.length() != 2){
                    cout << "Education should be a two character identifier." << endl;
                    return;
                }
                else {
                    
                }
                cout << "Date Hired (MM DD YYYY): " << endl;
                cin >> month >> day >> year;
                if (month > 12 || day > 31 || year < 1000 || year > 9999){
                    cout << "Date must be in the format MM DD YYYY" << endl;
                    return;
                }
                else{
                    
                }
                cout << "Department (4 Digit Code): " << endl;
                cin >> dept;
                if (dept.length() != 4){
                    cout << "Department code must be 4 digits" <<endl;
                    return;
                }
                else{

                }
                cout << "Rate: " << endl;
                cin >> rate;

                date = to_string(month) + "/" + to_string(day) + "/" + to_string(year);

                createWorker(ID, name, age, gender, education, date, dept, rate);

            } 
            else{
                cout << "Maximum number of workers reached. Returning to previous page.\n" <<endl;
            }
        }
        else if (input == 'v'){
            if(workerCount == 0){
                cout << "No worker has been added. Please add a new worker to view data." << endl;
            }
            else if (workerCount == 1){
                string worker1 = work1.getName();
                cout << "Only one worker created. Defaulting to Worker 1 \n"
                    << "1. " << worker1;
                work1.displayInfo();
            }
            else if (workerCount == 2){
                int selectInput;
                string worker1 = work1.getName();
                string worker2 = work2.getName();
                cout << "Please select a worker: \n"
                    << "1. " << worker1
                    << "\n2. " << worker2;
                cin >> selectInput;
                if (selectInput == 1){
                    work1.displayInfo();
                }
                else if (selectInput == 2){
                    work2.displayInfo();
                }
                else{
                    cout << "Error, unknown Input" << endl;
                }
            }
            else if (workerCount == 3){
                int selectInput;
                string worker1 = work1.getName();
                string worker2 = work2.getName();
                string worker3 = work3.getName();
                cout << "Please select a worker: \n"
                    << "1. " << worker1
                    << "\n2. " << worker2
                    << "\n3. " << worker3;
                cin >> selectInput;
                if (selectInput == 1){
                    work1.displayInfo();
                }
                else if (selectInput == 2){
                    work2.displayInfo();
                }
                else if (selectInput == 3){
                    work3.displayInfo();
                }
                else{
                    cout << "Error, unknown Input" << endl;
                }
            }
            else if (workerCount == 4){
                int selectInput;
                string worker1 = work1.getName();
                string worker2 = work2.getName();
                string worker3 = work3.getName();
                string worker4 = work4.getName();
                cout << "Please select a worker: \n"
                    << "1. " << worker1
                    << "\n2. " << worker2
                    << "\n3. " << worker3
                    << "\n4. " << worker4;
                cin >> selectInput;
                if (selectInput == 1){
                    work1.displayInfo();
                }
                else if (selectInput == 2){
                    work2.displayInfo();
                }
                else if (selectInput == 3){
                    work3.displayInfo();
                }
                else if (selectInput == 4){
                    work4.displayInfo();
                }
            }
            else if (workerCount == 5){
                int selectInput;
                string worker1 = work1.getName();
                string worker2 = work2.getName();
                string worker3 = work3.getName();
                string worker4 = work4.getName();
                string worker5 = work5.getName();
                cout << "Please select a worker: \n"
                    << "1. " << worker1
                    << "\n2. " << worker2
                    << "\n3. " << worker3
                    << "\n4. " << worker4
                    << "\n5. " << worker5;
                cin >> selectInput;
                if (selectInput == 1){
                    work1.displayInfo();
                }
                else if (selectInput == 2){
                    work2.displayInfo();
                }
                else if (selectInput == 3){
                    work3.displayInfo();
                }
                else if (selectInput == 4){
                    work4.displayInfo();
                }
                else if (selectInput == 5){
                    work5.displayInfo();
                }
            }
            else{
                cout <<"A fatal error has occured. Exiting the program";
                exit;
            }

        }
        else if (input == 'e'){
            char editInput;
            cout << "Edit Menu\n"
                << "To edit a worker's ID, enter 'i'\n"
                << "To edit a worker's name, enter 'n'\n"
                << "To edit a worker's age, enter 'a'\n"
                << "To edit a worker's gender, enter 'g'\n"
                << "To edit a worker's education, enter 'e'\n"
                << "To edit a worker's hiring date, enter 'd'\n"
                << "To edit a worker's department, enter 'p'\n"
                << "To edit a worker's rate, enter 'r'\n"
                << "To go back, enter 'b'\n" << endl;
            cin >> editInput;
            cin.ignore();
            int workerInput;
            cout << "Please select a worker:\n";
            if (workerCount == 0) {
                cout << "There are no workers available" << endl;
                return;
            }
            if (workerCount >= 1) cout << "1. " << work1.getName() << endl;
            if (workerCount >= 2) cout << "2. " << work2.getName() << endl;
            if (workerCount >= 3) cout << "3. " << work3.getName() << endl;
            if (workerCount >= 4) cout << "4. " << work4.getName() << endl;
            if (workerCount >= 5) cout << "5. " << work5.getName() << endl;
            cin >> workerInput;

            if (editInput == 'i'){
                // Edit ID
                int ID;
                cout << "Employee ID: " << endl;
                cin >> ID;
                if (ID >= 100000000 && ID <= 999999999) {
                    if (workerInput == 1){
                        work1.setID(ID);
                    }
                    else if (workerInput == 2){
                        work2.setID(ID);
                    }
                    else if (workerInput == 3){
                        work3.setID(ID);
                    }
                    else if (workerInput == 4){
                        work4.setID(ID);
                    }
                    else if (workerInput == 5){
                        work5.setID(ID);
                    }
                    else {
                        cout << "Invalid worker selection." << endl;
                        return;
                    }
                } 
                else {
                    cout << "ID must be exactly 9 digits." << endl;
                    return;
                }
            }
            else if (editInput == 'n'){
                // Edit Name
                string name, first, last;
                cout << "Employee Name: " << endl;
                cin >> first >> last;
                name = first + " " + last;
                if (name.length() > 30){
                    cout << "Error, Name may not exceed 30 characters" << endl;
                    return;
                }
                else{
                    if (workerInput == 1){
                        work1.setName(name);
                    }
                    else if (workerInput == 2){
                        work2.setName(name);
                    }
                    else if (workerInput == 3){
                        work3.setName(name);
                    }
                    else if (workerInput == 4){
                        work4.setName(name);
                    }
                    else if (workerInput == 5){
                        work5.setName(name);
                    }
                    else {
                        cout << "Invalid worker selection." << endl;
                        return;
                    }
                    cout << "Name updated successfully.\n" << endl;
                }
            }
            else if (editInput == 'a'){
                // Edit Age
                int age;
                cout << "Age: " << endl;
                cin >> age;
                if (age >= 10 && age <= 99) {
                    if (workerInput == 1){
                        work1.setAge(age);
                    }
                    else if (workerInput == 2){
                        work2.setAge(age);
                    }
                    else if (workerInput == 3){
                        work3.setAge(age);
                    }
                    else if (workerInput == 4){
                        work4.setAge(age);
                    }
                    else if (workerInput == 5){
                        work5.setAge(age);
                    }
                    else {
                        cout << "Invalid worker selection." << endl;
                        return;
                    } 
                    cout << "Age updated successfully.\n" << endl;
                } 
                else {
                    cout << "Age must be exactly 2 digits." << endl;
                    return;
                }
        }
            else if (editInput == 'g'){
                // Edit Gender
                char gender;
                cout << "Gender (M/F): " << endl;
                cin >> gender;
                if (workerInput == 1){
                    work1.setGender(gender);
                }
                else if (workerInput == 2){
                    work2.setGender(gender);
                }
                else if (workerInput == 3){
                    work3.setGender(gender);
                }
                else if (workerInput == 4){
                    work4.setGender(gender);
                }
                else if (workerInput == 5){
                    work5.setGender(gender);
                }
                else {
                    cout << "Invalid worker selection." << endl;
                    return;
                } 
                cout << "Gender updated successfully.\n" << endl;
            }
            else if (editInput == 'e'){
                // Edit Education
                string education;
                cout << "Education (Abbreviation, ie MD or HS): " << endl;
                cin >> education;
                if (education.length() != 2){
                    cout << "Education should be a two character identifier." << endl;
                    return;
                }
                else {
                    if (workerInput == 1){
                        work1.setEducation(education);
                    }
                    else if (workerInput == 2){
                        work2.setEducation(education);
                    }
                    else if (workerInput == 3){
                        work3.setEducation(education);
                    }
                    else if (workerInput == 4){
                        work4.setEducation(education);
                    }
                    else if (workerInput == 5){
                        work5.setEducation(education);
                    }
                    else {
                        cout << "Invalid worker selection." << endl;
                        return;
                    } 
                    cout << "Education updated successfully.\n" << endl;
                }
            }
            else if (editInput == 'd'){
                // Edit Hiring Date
                string date;
                int month, day, year = 0;
                cout << "Date Hired (MM DD YYYY): " << endl;
                cin >> month >> day >> year;
                if (month > 12 || day > 31 || year < 1000 || year > 9999){
                    cout << "Date must be in the format MM DD YYYY" << endl;
                    return;
                }
                else{
                    if (workerInput == 1){
                        work1.setHiringDate(month, day, year);
                    }
                    else if (workerInput == 2){
                        work2.setHiringDate(month, day, year);
                    }
                    else if (workerInput == 3){
                        work3.setHiringDate(month, day, year);
                    }
                    else if (workerInput == 4){
                        work4.setHiringDate(month, day, year);
                    }
                    else if (workerInput == 5){
                        work5.setHiringDate(month, day, year);
                    }
                    else {
                        cout << "Invalid worker selection." << endl;
                        return;
                    } 
                    cout << "Date Hired updated successfully.\n" << endl;
                }
            }
            else if (editInput == 'p'){
                // Edit Department
                string dept;
                cout << "Department (4 Digit Code): " << endl;
                cin >> dept;
                if (dept.length() != 4){
                    cout << "Department code must be 4 digits" <<endl;
                    return;
                }
                else{
                    if (workerInput == 1){
                        work1.setDept(dept);
                    }
                    else if (workerInput == 2){
                        work2.setDept(dept);
                    }
                    else if (workerInput == 3){
                        work3.setDept(dept);
                    }
                    else if (workerInput == 4){
                        work4.setDept(dept);
                    }
                    else if (workerInput == 5){
                        work5.setDept(dept);
                    }
                    else {
                        cout << "Invalid worker selection." << endl;
                        return;
                    } 
                    cout << "Department successfully Changed" << endl;
                }
            }
            else if (editInput == 'r'){
                // Edit Rate
                float rate;
                cin >> rate;
                if (workerInput == 1){
                    work1.setRate(rate);
                }
                else if (workerInput == 2){
                    work2.setRate(rate);
                }
                else if (workerInput == 3){
                    work3.setRate(rate);
                }
                else if (workerInput == 4){
                    work4.setRate(rate);
                }
                else if (workerInput == 5){
                    work5.setRate(rate);
                }
                else {
                    cout << "Invalid worker selection." << endl;
                    return;
                }
                cout << "Hourly rate succesfully changed" << endl;
            }
            else if (editInput == 'b'){
                return;
            }
            else{
                cout << "Input not recognized, please try again\n" << endl;
            }
        }
        else if (input == 'b'){
            return;
        }
        else if (input = 't'){
            createWorker(123456789, "test name", 22, 'm', "hs", "01/01/2000", "test", 99);
            return;
        }
        else{
            cout << "Input not recognized, please try again\n" << endl;
        }
    }
}

void managerMenu(){
    char input;
    while(true){
        cout << "Manager Menu\n"
            << "To add a new manager, enter 'n'\n"
            << "To view a manager, enter 'v'\n" 
            << "To edit a manager, enter 'e'\n"
            << "To go back, enter 'b'\n" <<endl;
        cin >> input;

        if (input == 'n'){
            if (managerCount <= 2){
                int ID, month, day, year = 0;
                string first, last, education, dept, date, name, title = "";
                double age = 0;
                float salary = 0;
                char gender;

                cout << "Employee ID: " << endl;
                cin >> ID;
                if (ID >= 100000000 && ID <= 999999999) {
                
                } 
                else {
                    cout << "ID must be exactly 9 digits." << endl;
                    return;
                }
                cout << "Employee Name (First Last): " << endl;
                cin >> first >> last;
                name = first + " " + last;
                if (name.length() > 30){
                    cout << "Error, Name may not exceed 30 characters" << endl;
                    return;
                }
                else{
                    
                }
                cout << "Age: " << endl;
                cin >> age;
                if (age >= 10 && age <= 99) {
                
                } 
                else {
                    cout << "Age must be exactly 2 digits." << endl;
                    return;
                }
                cout << "Gender (ie M or F): " << endl;
                cin >> gender;
                cout << "Education (Abbreviation, ie MD or HS): " << endl;
                cin >> education;
                if (education.length() != 2){
                    cout << "Education should be a two character identifier." << endl;
                    return;
                }
                cout << "Date Promoted (MM DD YYYY): " << endl;
                cin >> month >> day >> year;
                if (month > 12 || day > 31 || year < 1000 || year > 9999){
                    cout << "Date must be in the format MM DD YYYY" << endl;
                    return;
                }
                else{

                }
                cout << "Department (4 Digit Code): " << endl;
                cin >> dept;
                if (dept.length() != 4){
                    cout << "Department code must be 4 digits" <<endl;
                    return;
                }
                cout << "Title: " << endl;
                cin >> title;
                if (title.length() < 21){

                }
                else {
                    cout << "Title cannot be longer than 20 characters" <<endl;
                    return;
                }
                cout << "Salary: " << endl;
                cin >> salary;

                date = to_string(month) + "/" + to_string(day) + "/" + to_string(year);

                createManager(ID, name, age, gender, education, date, dept, title, salary);

            } 
            else{
                cout << "Maximum number of managers reached. Returning to previous page.\n" <<endl;
            }
        }
        else if (input == 'v'){
            if(managerCount == 0){
                cout << "No manager has been added. Please add a new manager to view data." << endl;
            }
            else if (managerCount == 1){
                string Manager1 = man1.getName();
                cout << "Only one manager created. Defaulting to Manager 1 \n"
                    << "1. " << Manager1;
                man1.displayInfo();
            }
            else if (managerCount == 2){
                int SelectInput;
                string Manager1 = man1.getName();
                string Manager2 = man2.getName();
                cout << "Please select a manager: \n"
                    << "1. " << Manager1
                    << "2. " << Manager2;
                cin >> SelectInput;
                if (SelectInput == 1){
                    man1.displayInfo();
                }
                else if (SelectInput == 2){
                    man2.displayInfo();
                }
                else{
                    cout << "Error, unknown Input" << endl;
                }
            }
            else if (managerCount == 3){
                int selectInput;
                string Manager1 = man1.getName();
                string Manager2 = man2.getName();
                string Manager3 = man3.getName();
                cout << "Please select a manager: \n"
                    << "1. " << Manager1
                    << "2. " << Manager2
                    << "3. " << Manager3;
                cin >> selectInput;
                if (selectInput == 1){
                    man1.displayInfo();
                }
                else if (selectInput == 2){
                    man2.displayInfo();
                }
                else if (selectInput == 3){
                    man3.displayInfo();
                }
                else{
                    cout << "Error, unknown Input" << endl;
                }
            }
            else{
                cout <<"A fatal error has occured. Exiting the program";
                exit;
            }

        }
                else if (input == 'e'){
            char editInput;
            cout << "Edit Menu\n"
                << "To edit a manager's ID, enter 'i'\n"
                << "To edit a manager's name, enter 'n'\n"
                << "To edit a manager's age, enter 'a'\n"
                << "To edit a manager's gender, enter 'g'\n"
                << "To edit a manager's education, enter 'e'\n"
                << "To edit a manager's hiring date, enter 'd'\n"
                << "To edit a manager's department, enter 'p'\n"
                << "To edit a manager's title, emter 't'\n"
                << "To edit a manager's rate, enter 'r'\n"
                << "To go back, enter 'b'\n" << endl;
            cin >> editInput;
            cin.ignore();
            int workerInput;
            cout << "Please select a manager:\n";
            if (managerCount == 0) {
                cout << "There are no manager available" << endl;
                return;
            }
            if (managerCount >= 1) cout << "1. " << man1.getName() << endl;
            if (managerCount >= 2) cout << "2. " << man2.getName() << endl;
            if (managerCount >= 3) cout << "3. " << man3.getName() << endl;
            cin >> workerInput;

            if (editInput == 'i'){
                // Edit ID
                int ID;
                cout << "Employee ID: " << endl;
                cin >> ID;
                if (ID >= 100000000 && ID <= 999999999) {
                    if (workerInput == 1){
                        man1.setID(ID);
                    }
                    else if (workerInput == 2){
                        man2.setID(ID);
                    }
                    else if (workerInput == 3){
                        man3.setID(ID);
                    }
                    else {
                        cout << "Invalid manager selection." << endl;
                        return;
                    }
                } 
                else {
                    cout << "ID must be exactly 9 digits." << endl;
                    return;
                }
            }
            else if (editInput == 'n'){
                // Edit Name
                string name, first, last;
                cout << "Employee Name: " << endl;
                cin >> first >> last;
                name = first + " " + last;
                if (name.length() > 30){
                    cout << "Error, Name may not exceed 30 characters" << endl;
                    return;
                }
                else{
                    if (workerInput == 1){
                        man1.setName(name);
                    }
                    else if (workerInput == 2){
                        man2.setName(name);
                    }
                    else if (workerInput == 3){
                        man3.setName(name);
                    }
                    else {
                        cout << "Invalid manager selection." << endl;
                        return;
                    }
                    cout << "Name updated successfully.\n" << endl;
                }
            }
            else if (editInput == 'a'){
                // Edit Age
                int age;
                cout << "Age: " << endl;
                cin >> age;
                if (age >= 10 && age <= 99) {
                    if (workerInput == 1){
                        man1.setAge(age);
                    }
                    else if (workerInput == 2){
                        man2.setAge(age);
                    }
                    else if (workerInput == 3){
                        man3.setAge(age);
                    }
                    else {
                        cout << "Invalid manager selection." << endl;
                        return;
                    } 
                    cout << "Age updated successfully.\n" << endl;
                } 
                else {
                    cout << "Age must be exactly 2 digits." << endl;
                    return;
                }
        }
            else if (editInput == 'g'){
                // Edit Gender
                char gender;
                cout << "Gender (M/F): " << endl;
                cin >> gender;
                if (workerInput == 1){
                    man1.setGender(gender);
                }
                else if (workerInput == 2){
                    man2.setGender(gender);
                }
                else if (workerInput == 3){
                    man3.setGender(gender);
                }
                else {
                    cout << "Invalid manager selection." << endl;
                    return;
                } 
                cout << "Gender updated successfully.\n" << endl;
            }
            else if (editInput == 'e'){
                // Edit Education
                string education;
                cout << "Education (Abbreviation, ie MD or HS): " << endl;
                cin >> education;
                if (education.length() != 2){
                    cout << "Education should be a two character identifier." << endl;
                    return;
                }
                else {
                    if (workerInput == 1){
                        man1.setEducation(education);
                    }
                    else if (workerInput == 2){
                        man2.setEducation(education);
                    }
                    else if (workerInput == 3){
                        man3.setEducation(education);
                    }
                    else {
                        cout << "Invalid manager selection." << endl;
                        return;
                    } 
                    cout << "Education updated successfully.\n" << endl;
                }
            }
            else if (editInput == 'd'){
                // Edit Hiring Date
                string date;
                int month, day, year = 0;
                cout << "Date Hired (MM DD YYYY): " << endl;
                cin >> month >> day >> year;
                date = to_string(month) + "/" + to_string(day) + "/" + to_string(year);
                if (month > 12 || day > 31 || year < 1000 || year > 9999){
                    cout << "Date must be in the format MM DD YYYY" << endl;
                    return;
                }
                else{
                    if (workerInput == 1){
                        man1.setPromoDate(date);
                    }
                    else if (workerInput == 2){
                        man2.setPromoDate(date);
                    }
                    else if (workerInput == 3){
                        man3.setPromoDate(date);
                    }
                    else {
                        cout << "Invalid manager selection." << endl;
                        return;
                    } 
                    cout << "Date Hired updated successfully.\n" << endl;
                }
            }
            else if (editInput == 'p'){
                // Edit Department
                string dept;
                cout << "Department (4 Digit Code): " << endl;
                cin >> dept;
                if (dept.length() != 4){
                    cout << "Department code must be 4 digits" <<endl;
                    return;
                }
                else{
                    if (workerInput == 1){
                        man1.setDept(dept);
                    }
                    else if (workerInput == 2){
                        man2.setDept(dept);
                    }
                    else if (workerInput == 3){
                        man3.setDept(dept);
                    }
                    else {
                        cout << "Invalid manager selection." << endl;
                        return;
                    } 
                    cout << "Department successfully Changed" << endl;
                }
            }
            else if (editInput == 'p'){
                string title;
                cout << "Title: " << endl;
                cin >> title;
                if (title.length() < 21){
                    if (workerInput == 1){
                        man1.setTitle(title);
                    }
                    else if (workerInput == 2){
                        man2.setTitle(title);
                    }
                    else if (workerInput == 3){
                        man3.setTitle(title);
                    }
                    else {
                        cout << "Invalid manager selection." << endl;
                        return;
                    } 
                }
                else {
                    cout << "Title cannot be longer than 20 characters" <<endl;
                    return;
                }
            }
            else if (editInput == 'r'){
                // Edit Rate
                float rate;
                cout << "Rate: " << endl; 
                cin >> rate;
                if (workerInput == 1){
                    man1.setSalary(rate);
                }
                else if (workerInput == 2){
                    man2.setSalary(rate);
                }
                else if (workerInput == 3){
                    man3.setSalary(rate);
                }
                else {
                    cout << "Invalid manager selection." << endl;
                    return;
                }
                cout << "Salary succesfully changed" << endl;
            }
            else if (editInput == 'b'){
                return;
            }
            else{
                cout << "Input not recognized, please try again\n" << endl;
            }
        }
        else if (input == 'b'){
            return;
        }
        else{
            cout << "Input not recognized, please try again\n" << endl;
        }
    }
}

void mainMenu(){
    char input;
    cout << "Main Menu\n"
        << "To access the worker menu, please enter 'w'\n"
        << "To access the manager menu, please enter 'm'\n"
        << "To exit the program, type 'x'\n" << endl;
    cin >> input;

        if (input == 'w'){
            workerMenu();
        }
        else if (input == 'm'){
            managerMenu();
        }
        else if (input == 'x'){
            exit(0);
        }
        else{
            cout << "Input not recognized, please try again\n" << endl;
        }
}


int main(){
    while (true){
        mainMenu();
    }

    return 0;
}