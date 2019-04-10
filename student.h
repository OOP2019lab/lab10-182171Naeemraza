
#pragma once
#include<iostream>
#include"course.h"
#include<stdio.h>
using namespace std;
class student
{
	friend class course; 
	string name;
	string rollnmb;
	string username;
	course**obj;
	int size;
public:
	
	student(string a,string b,string c);
	void student::printstudent();
	void student::addcourse(course *obj);
	void student::dropcourse(course *obj);
	friend ostream& operator<<(ostream& obj,student&);
	student& operator=(student &a);
	student(const student &);
	//void student::setstudent(student);

};
