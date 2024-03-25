#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
    }

    void displayData() {
        cout << "Name: " << name << endl;
    }
};

class Admin : public Person {
protected:
    float salary;
public:
    void getData() {
        Person::getData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        Person::displayData();
        cout << "Salary: " << salary << endl;
    }

    virtual float bonus() {
        return salary;
    }
};

class Account : public Person {
protected:
    float salary;
public:
    void getData() {
        Person::getData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        Person::displayData();
        cout << "Salary: " << salary << endl;
    }

    virtual float bonus() {
        return salary;
    }
};

class Master : public Admin, public Account {
public:
    void getData() {
        Admin::getData();
        Account::getData();
    }

    void displayData() {
        Admin::displayData();
        Account::displayData();
    }

    float bonus() {
        return Admin::bonus() + Account::bonus();
    }
};

int main() {
    Master employee;
    employee.getData();
    cout << "Bonus = " << employee.bonus() + 1000 << endl; // adding 1000 to bonus
    return 0;
}

