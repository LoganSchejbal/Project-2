#include <iostream>
#include <string>
using namespace std;

int workerCount;
int managerCount;

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
            if (managerCount == 0){
                
            }
            else if (managerCount == 1){

            }
            else if (managerCount == 2){

            }
            else if (managerCount == 3){

            } 
            else{
                cout << "Maximum number of managers reached. Returning to previous page.\n" <<endl;
            }
        }
        else if (input == 'v'){
            if(managerCount == 0){
                cout << "No manager has been added. Please add a new manager to view data."
            }
            else if (managerCount == 1){
                string Manager1 = man1.getName();
                cout << "Only one manager created. Defaulting to Manager 1 \n"
                    << "1. " << Manager1;
                man1.displayInfo();
            }
            else if (managerCount == 2){
                string Manager1 = man1.getName();
                string Manager2 = man2.getName();
                cout << "Please select a manager: \n"
                    << "1. " << Manager1
                    << "2. " << Manager2;
            }
            else if (managerCount == 3){
                string Manager1 = man1.getName();
                string Manager2 = man2.getName();
                string Manager3 = man3.getName();
                cout << "Please select a manager: \n"
                    << "1. " << Manager1
                    << "2. " << Manager2
                    << "3. " << Manager3;
            }
            else if (managerCount == 4){
                string Manager1 = man1.getName();
                string Manager2 = man2.getName();
                string Manager3 = man3.getName();
                string Manager4 = man4.getName();
                cout << "Please select a manager: \n"
                    << "1. " << Manager1
                    << "2. " << Manager2
                    << "3. " << Manager3
                    << "4. " << Manager4;
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