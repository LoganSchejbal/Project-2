#include <iostream>
#include <string>
#include "workers.cpp"
using namespace std;

int workerCount = 0;
int managerCount = 0;
manager man1, man2, man3;

void workerMenu(){
    char input;
    while(true){
        cout << "Worker Menu\n"
            << "To add a new worker, enter 'n'\n"
            << "To view a worker, enter 'v'\n" 
            << "To go back, enter 'b'\n" <<endl;
        cin >> input;

        if (input == 'n'){

        }
        else if (input == 'v'){

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
            << "To go back, enter 'b'\n" <<endl;
        cin >> input;

        if (input == 'n'){
            if (managerCount <= 2){
                int ID, month, day, year = 0;
                string first, last, education, dept, date, name, title = "";
                double age = 0;
                float salary = 0;

                cout << "Employee ID: " << endl;
                cin >> ID;
                cout << "Employee Name (First Last): " << endl;
                cin >> first >> last;
                cout << "Age: " << endl;
                cin >> age;
                cout << "Education (Abbreviation, ie MD or HS): " << endl;
                cin >> education;
                cout << "Date Promoted (MM DD YYYY): " << endl;
                cin >> month >> day >> year;
                cout << "Department: " << endl;
                cin >> dept;
                cout << "Title: " << endl;
                cin >> title;
                cout << "Salary: " << endl;
                cin >> salary;

                name = first + " " + last;
                date = to_string(month) + "/" + to_string(day) + "/" + to_string(year);

                manager tempMan(ID, name, age, education, date, dept, title, salary);
                if (managerCount == 0){
                    man1 = tempMan;
                }
                else if (managerCount == 1){
                    man2 = tempMan;
                }
                else if (managerCount == 2){
                    man3 = tempMan;
                }
                ++managerCount;
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
                if (input = '1'){
                    man1.displayInfo();
                }
                else if (input = '2'){
                    man2.displayInfo();
                }
                else{
                    cout << "Error, unknown Input" << endl;
                }
            }
            else if (managerCount == 3){
                string Manager1 = man1.getName();
                string Manager2 = man2.getName();
                string Manager3 = man3.getName();
                cout << "Please select a manager: \n"
                    << "1. " << Manager1
                    << "2. " << Manager2
                    << "3. " << Manager3;
                cin >> input;
                if (input = '1'){
                    man1.displayInfo();
                }
                else if (input = '2'){
                    man2.displayInfo();
                }
                else if (input == '3'){
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