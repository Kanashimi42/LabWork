#include "University.h"

University::University(string n, string a, string f) {
	universityName = n;
	universityAddress = a;
	universityFaculty = f;
}

void University::InputUniversity() {
	cout << "Enter university name: ";
	cin >> universityName;

	cout << "Enter university address: ";
	cin >> universityAddress;

	cout << "Enter university faculty: ";
	cin >> universityFaculty;
}

void University::PrintUniversity() {
	cout << "University name: " << universityName << endl;
	cout << "University address: " << universityAddress << endl;
	cout << "University faculty: " << universityFaculty << endl;
}

string University::GetUniversityName() const { return universityName; }
string University::GetUniversityAddress() const { return universityAddress; }
string University::GetUniversityFaculty() const { return universityFaculty; }

void University::SetUniversityName(string n) { universityName = n; }
void University::SetUniversityAddress(string a) { universityAddress = a; }
void University::SetUniversityFaculty(string f) { universityFaculty = f; }
