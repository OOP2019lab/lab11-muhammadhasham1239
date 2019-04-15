#pragma once
#include <iostream>
using namespace std;
#include "faculty.h"

//default constructor
faculty::faculty(){
	coursecount=0;
}

//overloaded constructor
faculty::faculty(string f,string l,int a,int c,int e) : person(f,l,a){
	coursecount=c;
	extensionnumber=e;
	cout<<"faculty()called"<<endl;
}

//destructor
faculty::~faculty(){
	cout<<"~faculty() called"<<endl;
}

//getter
int faculty::getcoursecount(){
	return coursecount;
}

//setter
void faculty::setcoursecount(int a){
	coursecount=a;
}

//getter
int faculty::getextensionnumber(){
	return extensionnumber;
}

//setter
void faculty::setextensionnumber(int a){
	extensionnumber=a;
}

//print function
void faculty::print(){
	person::print();
	cout<<"Number of course/s teaching:"<<coursecount<<endl;
	cout<<"Extension number is:"<<extensionnumber<<endl;
}
