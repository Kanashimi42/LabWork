#include "Person.h"

Person::Person(string n, int a) {
	name = n;
	age = a;
}

void Person::InputPerson() {
	cout << "Enter name: ";
	cin >> name;

	cout << "Enter age: ";
	cin >> age;
}

void Person::PrintPerson() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

string Person::GetName() const { return name; }
int Person::GetAge() const { return age; }

void Person::SetName(string n) { name = n; }
void Person::SetAge(int a) { age = a; }