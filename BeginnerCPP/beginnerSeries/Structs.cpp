#include <iostream>

using namespace std;

void printEmployee(struct Employee &e);
struct Employee createEmployee();

struct Employee
{
    int ssn;
    string name;
    string department;
    double hourly_rate;
};

int main()
{
    struct Employee justin = {123, "Justin", "Software Development", 69.42};
    struct Employee joe = {456, "Joe M", "Marketing", 42};
    struct Employee jenna = createEmployee();
    printEmployee(justin);
    cout << "--------------\n";
    printEmployee(joe);
    cout << "--------------\n";
    printEmployee(jenna);

    return 0;
}

void printEmployee(struct Employee &e)
{
    cout << "Employee - " << e.ssn << "\n";
    cout << "Name: " << e.name << "\n";
    cout << "Department: " << e.department << "\n";
    cout << "Hourly Rate: " << e.hourly_rate << "\n";
}

struct Employee createEmployee()
{
    struct Employee e;
    cout << "Enter employee ssn: ";
    cin >> e.ssn;
    cout << "Employee name: ";
    cin.ignore();
    getline(cin, e.name);
    cout << "Employee department: ";
    getline(cin, e.department);
    cout << "Employee hourly rate: ";
    cin >> e.hourly_rate;
    return e;
}