#pragma once
#include<iostream>
#include"student.h"
#include"course.h"
#include<stdio.h>
using namespace std;
int main()
{
	student s1("anum","S1","11-3351");
	student s2("sara","S2","12-6462");
	student s3("sana","S3","11-4531");
	student s4("zara","S4","12-4342");
	student s5("hira","S5","11-5940");
	course c1("C1","OOP","CS102");
	course c2("C2","OOP","CS101");
	course c3("C2","OOP","CS365");
    s1.printstudent();
	s2.printstudent();
	s3.printstudent();
	s4.printstudent();
	s5.printstudent();
	c1.printcourses();
	c2.printcourses();
	c3.printcourses();
	system("pause");
}