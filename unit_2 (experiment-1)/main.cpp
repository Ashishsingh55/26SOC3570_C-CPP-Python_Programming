#include <iostream>
#include <string>
using namespace std;

class Staff {
private:
    int id;
    string employeeName;
    float salary;
    float incentive;
    float totalPay;

public:

    // Default constructor
    Staff() : id(0), employeeName("Not Assigned"),
              salary(0), incentive(0), totalPay(0) {
        cout << "Default constructor executed." << endl;
    }

    // Parameterized constructor
    Staff(int i, string n, float s, float inc) {
        id = i;
        employeeName = n;
        salary = s;
        incentive = inc;

        calculatePay();

        cout << "Parameterized constructor executed." << endl;
    }

    // Calculate total salary
    void calculatePay() {
        totalPay = salary + incentive;
    }

    // Display employee details
    void showDetails() const {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Incentive: " << incentive << endl;
        cout << "Total Salary: " << totalPay << endl;
    }
};

int main() {

    Staff employee1;
    employee1.showDetails();

    cout << endl;

    Staff employee2(205, "Rahul Sharma", 45000, 8000);
    employee2.showDetails();

    return 0;
}