#include <iostream>
#include "Student.h"

using namespace std;

int main() {
	srand(time(NULL));

	int* grades = new int[5];
	for (int i = 0; i < 5; i++)
		grades[i] = 9 + rand() % 4;

	Student student("Viacheslav", 20, "ITStepUniversity", "Sodova Vul. 3", "OOP", "KNP-221", 5, grades);
	student.PrintPerson();
	student.PrintUniversity();
	student.PrintStudent();

	return 0;
}