#pragma once
#include <iostream>
using namespace std;
#include "person.h"
#include <string>

//default constructor
person::person(){
	firstname="";
	lastname="";
	age=0;
}

//overloaded constructor
person::person(string f,string l,int a){
	firstname=f;
	lastname=l;
	age=a;
	cout<<"Person()called"<<endl;
}

//destructor
person::~person(){
	cout<<"~person() called"<<endl;
}

//getter
string person::getfirstname(){
	return firstname;
}

//setter
void person::setfirstname(string f){
	firstname=f;
}

//getter
string person::getlastname(){
	return lastname;
}

//setter
void person::setlastname(string f){
	lastname=f;
}

//getter
int person::getage(){
	return age;
}

//setter
void person::setage(int a){
	age=a;
}

//print function
void person::print(){
	cout<<"First Name="<<firstname<<endl;
	cout<<"Last Name="<<lastname<<endl;
	cout<<"Age is:"<<age<<endl;

}