#pragma once
#include <iostream>

using namespace std;

class Person {
    string name;
    int age;
public:
    Person(string, int);

    void InputPerson();
    void PrintPerson();

    string GetName() const;
    int GetAge() const;

    void SetName(string);
    void SetAge(int);
};