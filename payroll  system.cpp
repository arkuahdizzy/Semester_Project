#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string name;
    double hourlyRate;
    double hoursWorked;

    Employee() : name(""), hourlyRate(0.0), hoursWorked(0.0) {}
    Employee(const string& n, double rate, double hours) : name(n), hourlyRate(rate), hoursWorked(hours) {}

    double calculateSalary() const {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    Employee employees[5]; // Assuming you want to manage up to 5 employees

    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for Employee #" << i + 1 << ":" << endl;

        string name;
        double hourlyRate;
        double hoursWorked;

        cout << "Name: ";
        cin.ignore(); // Clear newline character from buffer
        getline(cin, name);

        cout << "Hourly Rate: ";
        cin >> hourlyRate;

        cout << "Hours Worked: ";
        cin >> hoursWorked;

        employees[i] = Employee(name, hourlyRate, hoursWorked);
    }

    cout << "\nAccount Details:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Employee #" << i + 1 << ": " << employees[i].name << endl;
        cout << "Salary: $" << employees[i].calculateSalary() << endl;
        cout << endl;
    }

return 0;
}
