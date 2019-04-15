#pragma once
#include <iostream>
using namespace std;
#include "student.h"
#include <string>

//default constructor
student::student(){
	int gpa=0;
}

//overloaded constructor
student::student(string f,string l,int a,float cgpa) : person(f,l,a){
	gpa=cgpa;
	cout<<"Student()called"<<endl;
}

//destructor
student::~student(){
	cout<<"~student() called"<<endl;
}

//getter
float student::getgpa(){
	return gpa;
}
//setter
void student::setgpa(int a){
	gpa=a;
}

//print function
void student::print(){
	person::print();
	cout<<"CGPA is:"<<gpa<<endl;
}

//void student::printStudent(){
 //cout << firstname << " " << lastname << "is" << age << "years old, his cgpa is"<< gpa;
//}



