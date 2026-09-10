#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int id,age;
    string course;
    public:
    void get();
    void display();
};
#endif