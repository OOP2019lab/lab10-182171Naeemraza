#pragma once
#include<iostream>
#include<stdio.h>
using namespace std;
class course
{
	friend class student;
	string coursename;
	string coursenmb;
	student **object;
	int objectsize;
	void addstudent(student*obj);
public:
	
	course::course(string a,string b,string c);
	void course::printcourses();

};