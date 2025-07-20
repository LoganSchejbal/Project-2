#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Abstract Base Class
class bankAccount {
    
protected:
    string name;
    int accountNumber;
    double balance;

public:
    
    bankAccount(string accountHolderName, int accountNumberParam, double initialBalance) {
        name = accountHolderName;
        accountNumber = accountNumberParam;
        balance = initialBalance;
    }


    virtual void deposit(double amount) {
        balance += amount;
    }

    virtual void withdraw(double amount) {
        balance -= amount;
    }
    

    virtual void display(ostream& out = cout) const {
        out << "Name: " << name << ", Account #: " << accountNumber
            << ", Balance: $" << balance << endl;
    }

    virtual void monthlyStatement(ostream& out = cout) = 0;

    virtual ~bankAccount() {}
};


// Abstract Class
class checkingAccount : public bankAccount {
    
public:
    checkingAccount(string n, int accNum, double bal)
        : bankAccount(n, accNum, bal) {}

    virtual void writeCheck(double amount) = 0;
};

class serviceChargeChecking : public checkingAccount {
private:
    static const int maxChecks = 3;
    int checksWritten;
    
    

public:
    
    
    serviceChargeChecking(string accountHolderName, int accountNumber, double initialBalance)
        : checkingAccount(accountHolderName, accountNumber, initialBalance) {
        checksWritten = 0;
    }


    void writeCheck(double amount) override {
        if (checksWritten < maxChecks && balance >= amount) {
            balance -= amount;
            checksWritten++;
            cout << "Check written: $" << amount << endl;
        } else {
            cout << "Check limit reached or insufficient funds. " << endl;
        }
    }

    void monthlyStatement(ostream& out = cout) override {
        out << "Service Charge Checking Monthly Statement " << endl;
        checksWritten = 0;
    }
};




class noServiceChargeChecking : public checkingAccount {
protected:
    double interestRate;
    double minBalance;

public:
    noServiceChargeChecking(string accountHolderName, int accountNum, double initialBalance,
                            double interest, double minimumBalanceRequired)
        : checkingAccount(accountHolderName, accountNum, initialBalance) {
        interestRate = interest;
        minBalance = minimumBalanceRequired;
    }

    void writeCheck(double amount) override {
        if (balance >= amount) {
            balance -= amount;
            cout << "Check written: $" << amount << endl;
        } else {
            cout << "Insufficient funds. " << endl;
        }
    }

    void monthlyStatement(ostream& out = cout) override {
        if (balance >= minBalance) {
            balance += balance * interestRate;
        }
        out << "No Service Charge Checking Monthly Statement " << endl;
    }
};

class highInterestChecking : public noServiceChargeChecking {
public:
    highInterestChecking(string accountHolderName, int accountNumber, double initialBalance)
        : noServiceChargeChecking(accountHolderName, accountNumber, initialBalance, 0.05, 1000.0) {
       
    }


    void monthlyStatement(ostream& out = cout) override {
        if (balance >= minBalance) {
            balance += balance * interestRate;
        }
        out << "High Interest Checking Monthly Statement\n";
    }
};






class savingsAccount : public bankAccount {
protected:
    double interestRate;

public:
    savingsAccount(string accountHolderName, int accountNumber, double initialBalance, double interest)
        : bankAccount(accountHolderName, accountNumber, initialBalance) {
        interestRate = interest;
    }

    void monthlyStatement(ostream& out = cout) override {
        balance += balance * interestRate;
        out << "Savings Monthly Statement\n";
    }
};






class highInterestSavings : public savingsAccount {
private:
    double minBalance;

    
    
    
    
public:
    highInterestSavings(string accountHolderName, int accountNumber, double initialBalance)
        : savingsAccount(accountHolderName, accountNumber, initialBalance, 0.04) {
        minBalance = 500.0;
    }

    void monthlyStatement(ostream& out = cout) override {
        if (balance >= minBalance) {
            balance += balance * interestRate;
        }
        out << "High Interest Savings Monthly Statement\n";
    }
};

class certificateOfDeposit : public bankAccount {
private:
    int maturityMonths;
    int currentMonth;
    double interestRate;

public:
    certificateOfDeposit(string accountHolderName, int accountNumber, double initialBalance,
                         int termInMonths, double interest)
        : bankAccount(accountHolderName, accountNumber, initialBalance) {
        maturityMonths = termInMonths;
        currentMonth = 0;
        interestRate = interest;
    }

    void withdraw(double amount, ostream& out = cout) {
        if (currentMonth < maturityMonths) {
            out << "Early withdrawal penalty applied.\n";
            balance -= amount + 50; // Penalty
        } else {
            bankAccount::withdraw(amount);
        }
    }

    void monthlyStatement(ostream& out = cout) override {
        if (currentMonth < maturityMonths) {
            currentMonth++;
        }
        balance += balance * interestRate;
        out << "CD Monthly Statement - Month " << currentMonth << endl;
    }

    void display(ostream& out = cout) const override {
        out << "CD Account - ";
        bankAccount::display(out);
    }
};

// Main
int main() {
    ofstream outFile("/Users/josephmirza/Desktop/bank_output.txt"); // Prints output to my desktop

    if (!outFile) {
        cerr << "Error opening output file.\n";
        return 1;
    }

    serviceChargeChecking scc("Alice", 1001, 500);
    scc.writeCheck(100);
    scc.monthlyStatement(outFile);
    scc.display(outFile);

    highInterestChecking hic("Bob", 1002, 2000);
    hic.writeCheck(300);
    hic.monthlyStatement(outFile);
    hic.display(outFile);

    highInterestSavings his("Charlie", 1003, 700);
    his.monthlyStatement(outFile);
    his.display(outFile);

    certificateOfDeposit cd("Dana", 1004, 1000, 6, 0.06);
    cd.monthlyStatement(outFile);
    cd.withdraw(200, outFile); // Early withdrawal
    cd.display(outFile);

    outFile.close();
    return 0;
}
