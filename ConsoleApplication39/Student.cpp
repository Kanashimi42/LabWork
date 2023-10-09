#include "Student.h"

Student::Student(string name, int age, string universityName, string universityAddress, string universityFaculty, string g, int nor, int* ats) :
	Person(name, age), University(universityName, universityAddress, universityFaculty) {

	group = g;
	numberOfGrades = nor;
	grades = new int[numberOfGrades];
	grades = ats;
}

Student::~Student() {
	delete[] grades;
}

void Student::InputStudent() {
	cout << "Enter group: ";
	cin >> group;

	cout << "Enter number of grades: ";
	cin >> numberOfGrades;

	cout << "Grades:" << endl;

	grades = new int[numberOfGrades];

	for (int i = 0; i < numberOfGrades; i++) {
		cout << "Enter grade " << i + 1 << ": ";
		cin >> grades[i];
	}
}

void Student::PrintStudent() {
	cout << "Group: " << group << endl;
	cout << "Number of grades: " << numberOfGrades << endl;

	for (int i = 0; i < numberOfGrades; i++)
		cout << grades[i] << endl;
}

string Student::GetGroup() const { return group; }
int Student::GetNumberOfGrades() const { return numberOfGrades; }
int* Student::GetGrades() const { return grades; }

void Student::SetGroup(string g) { group = g; }
void Student::SetNumberOfGrades(int n) { numberOfGrades = n; }
void Student::SetGrades(int* a) { grades = a; }