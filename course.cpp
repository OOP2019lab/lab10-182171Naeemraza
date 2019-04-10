#include"course.h"
#include<string>
course::course(string a,string b,string c)
{
	coursename=a;
	coursenmb=b;
	object=nullptr;
}
void course::printcourses()
{
	cout<<"Course Name:"<<coursename<<endl;
	cout<<"Course number:"<<coursenmb<<endl;
}