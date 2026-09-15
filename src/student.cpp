#include"student.h"
#include<iostream>
using namespace std;
void Student::get(){
    cout<<"enter your name,age,id and course"<<endl;
    cin>>name>>age>>id>>course;
}

void Student::display(){
    cout<<"Name:"<<name<<"\t"<<"Age:"<<age<<"\t"<<"Id:"<<id<<"\t"<<"Course:"<<course<<endl;
}
int Student::getid(){
    return id;
}

   
