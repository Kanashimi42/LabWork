#pragma once
#include <iostream>
#include "Person.h"
#include "University.h"

using namespace std;

class Student : public Person, public University {
    string group;
    int numberOfGrades;
    int* grades;
public:
    Student(string name, int age, string universityName, string universityAddress, string universityFaculty, string g, int nor, int* ats);
    ~Student();

    void InputStudent();
    void PrintStudent();

    string GetGroup() const;
    int GetNumberOfGrades() const;
    int* GetGrades() const;

    void SetGroup(string);
    void SetNumberOfGrades(int);
    void SetGrades(int*);
};
