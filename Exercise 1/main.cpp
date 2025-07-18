#include <iostream>
#include <string>
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
                int input;
                string worker1 = work1.getName();
                string worker2 = work2.getName();
                cout << "Please select a worker: \n"
                    << "1. " << worker1
                    << "\n2. " << worker2;
                cin >> input;
                if (input == 1){
                    work1.displayInfo();
                }
                else if (input == 2){
                    work2.displayInfo();
                }
                else{
                    cout << "Error, unknown Input" << endl;
                }
            }
            else if (workerCount == 3){
                int input;
                string worker1 = work1.getName();
                string worker2 = work2.getName();
                string worker3 = work3.getName();
                cout << "Please select a worker: \n"
                    << "1. " << worker1
                    << "\n2. " << worker2
                    << "\n3. " << worker3;
                cin >> input;
                if (input == 1){
                    work1.displayInfo();
                }
                else if (input == 2){
                    work2.displayInfo();
                }
                else if (input == 3){
                    work3.displayInfo();
                }
                else{
                    cout << "Error, unknown Input" << endl;
                }
            }
            else if (workerCount == 4){
                int input;
                string worker1 = work1.getName();
                string worker2 = work2.getName();
                string worker3 = work3.getName();
                string worker4 = work4.getName();
                cout << "Please select a worker: \n"
                    << "1. " << worker1
                    << "\n2. " << worker2
                    << "\n3. " << worker3
                    << "\n4. " << worker4;
                cin >> input;
                if (input == 1){
                    work1.displayInfo();
                }
                else if (input == 2){
                    work2.displayInfo();
                }
                else if (input == 3){
                    work3.displayInfo();
                }
                else if (input == 4){
                    work4.displayInfo();
                }
            }
            else if (workerCount == 5){
                int input;
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
                cin >> input;
                if (input == 1){
                    work1.displayInfo();
                }
                else if (input == 2){
                    work2.displayInfo();
                }
                else if (input == 3){
                    work3.displayInfo();
                }
                else if (input == 4){
                    work4.displayInfo();
                }
                else if (input == 5){
                    work5.displayInfo();
                }
            }
            else{
                cout <<"A fatal error has occured. Exiting the program";
                exit;
            }

        }
        else if (input == 'e'){
            char input;
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
            cin >> input;
            if (input == 'i'){
                // Edit ID
                int ID;
                cout << "Employee ID: " << endl;
                cin >> ID;
                if (ID >= 100000000 && ID <= 999999999) {
                
                } 
                else {
                    cout << "ID must be exactly 9 digits." << endl;
                    return;
                }
            }
            else if (input == 'n'){
                // Edit Name
                string name;
                cout << "Employee Name: " << endl;
                cin >> name;
                if (name.length() > 30){
                    cout << "Error, Name may not exceed 30 characters" << endl;
                    return;
                }
                else{
                    work1.setName(name);
                    cout << "Name updated successfully.\n" << endl;
                }
            }
            else if (input == 'a'){
                // Edit Age
                int age;
                cout << "Age: " << endl;
                cin >> age;
                if (age >= 10 && age <= 99) {
                    work1.setAge(age);
                    cout << "Age updated successfully.\n" << endl;
                } 
                else {
                    cout << "Age must be exactly 2 digits." << endl;
                    return;
                }
            }
            else if (input == 'g'){
                // Edit Gender
                char gender;
                cout << "Gender (M/F): " << endl;
                cin >> gender;
                work1.setGender(gender);
                cout << "Gender updated successfully.\n" << endl;
            }
            else if (input == 'e'){
                // Edit Education
                string education;
                cout << "Education (Abbreviation, ie MD or HS): " << endl;
                cin >> education;
                if (education.length() != 2){
                    cout << "Education should be a two character identifier." << endl;
                    return;
                }
                else {
                    work1.setEducation(education);
                    cout << "Education updated successfully.\n" << endl;
                }
            }
            else if (input == 'd'){
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
                    work1.setHiringDate(month, day, year);
                    cout << "Date Hired updated successfully.\n" << endl;
                }
            }
            else if (input == 'p'){
                // Edit Department
                string dept;
                cout << "Department (4 Digit Code): " << endl;
                cin >> dept;
                if (dept.length() != 4){
                    cout << "Department code must be 4 digits" <<endl;
                    return;
                }
                else{
                    cout << "What worker should this be applied to?\n" << endl;
                    
                }
            }
            else if (input == 'r'){
                // Edit Rate
            }
            else if (input == 'b'){
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
                int input;
                string Manager1 = man1.getName();
                string Manager2 = man2.getName();
                cout << "Please select a manager: \n"
                    << "1. " << Manager1
                    << "2. " << Manager2;
                cin >> input;
                if (input == 1){
                    man1.displayInfo();
                }
                else if (input == 2){
                    man2.displayInfo();
                }
                else{
                    cout << "Error, unknown Input" << endl;
                }
            }
            else if (managerCount == 3){
                int input;
                string Manager1 = man1.getName();
                string Manager2 = man2.getName();
                string Manager3 = man3.getName();
                cout << "Please select a manager: \n"
                    << "1. " << Manager1
                    << "2. " << Manager2
                    << "3. " << Manager3;
                cin >> input;
                if (input == 1){
                    man1.displayInfo();
                }
                else if (input == 2){
                    man2.displayInfo();
                }
                else if (input == 3){
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
            exit;
        }
        else{
            cout << "Input not recognized, please try again\n" << endl;
        }
}


int main(){
    while (true){
        mainMenu();
    }
}