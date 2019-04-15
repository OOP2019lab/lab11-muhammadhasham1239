#pragma once
#include "faculty.h"
#include "student.h"


int main(){
	student s1("Ted","Thompson",22,3.91);
	cout<<endl;
	faculty f1("Richard","Karp",45,2,420);
	cout<<endl;
	s1.print();
	cout<<endl;
	f1.print();
	cout<<endl;
	system("pause");
return 0;
}