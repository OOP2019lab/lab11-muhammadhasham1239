#pragma once
#include <iostream>
#include <cstring>;
using namespace std;
#include "person.h"

class faculty:public person{
	int coursecount;
	int extensionnumber;
public:
	faculty();//default constructor
	faculty(string fname,string lname,int age,int c,int e);//overloaded constructor
	~faculty();//destructor
	//getter setters
	int getcoursecount();
	void setcoursecount(int a);
	int getextensionnumber();
	void setextensionnumber(int a);
	//print function
	void print();
};