#include <iostream>
#include <fstream>
#include <sstream>

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
    string filename = "students.txt";
    ifstream reader;
    reader.open(filename);

    int temp;
    reader >> temp;
    const int numStudents = temp;
    struct Student students[numStudents];

    string currentLine;
    int currentStudentIndex = 0;
    getline(reader, currentLine);
    while (getline(reader, currentLine))
    {
        stringstream ss(currentLine);
        getline(ss, students[currentStudentIndex].name, ',');
        getline(ss, students[currentStudentIndex].primary_major, ',');
        ss >> students[currentStudentIndex].gpa;
        currentStudentIndex++;
    }
    reader.close();
    printStudents(students, numStudents);
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