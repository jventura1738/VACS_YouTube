#include <iostream>

using namespace std;

void printStudent(struct Student &s);
void printStudents(struct Student s[], int numStudents);

struct Student
{
    string name;
    string primary_major;
    double gpa;
};

int main()
{
    const int numStudents = 3;
    // Here we declare and initialize the struct array:
    struct Student students[numStudents] = {
        {"Justin", "Computer Science", 3.92},
        {"Jenna", "Undeclared", 3.6},
        {"Joe", "Marketing", 3.25}};

    printStudents(students, numStudents);
    return 0;
}

void printStudent(struct Student &s)
{
    cout << "Student - " << s.name << "\n";
    cout << "Major: " << s.primary_major << "\n";
    cout << "Gpa: " << s.gpa << "\n";
}

void printStudents(struct Student s[], int numStudents)
{
    for (int i = 0; i < numStudents; i++)
    {
        printStudent(s[i]);
        cout << "------------\n";
    }
}