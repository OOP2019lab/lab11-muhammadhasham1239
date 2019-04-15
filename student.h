#pragma once
#include <iostream>
#include <cstring>;
using namespace std;
#include "person.h"

class student:public person{
	float gpa;
public:
	student();//default constructor
	student(string fname,string lname,int age,float gpa);//overloaded constructor
	~student();//destructor
	//getter setters
	float getgpa();
	void setgpa(int a);
	//print function
	void print();
	void printStudent();

};
