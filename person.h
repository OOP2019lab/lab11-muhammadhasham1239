#pragma once
#include <iostream>
#include <cstring>;
using namespace std;

class person{
string firstname;
string lastname;
protected:
int age;

public:
	person();//default constructor
	person (string fname,string lname, int age);//overloaded constructor
	~person();//destructor
	//getter setters
	string getfirstname();
	void setfirstname(string f);
	string getlastname();
	void setlastname(string f);
	int getage();
	void setage(int a);
	//print function
	void print();
};

