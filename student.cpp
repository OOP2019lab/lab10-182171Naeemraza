#include"student.h"
#include<string>
#include<iostream>
student::student(string a,string b,string c)
{
	name=a;
	username=b;
	rollnmb=c;
	obj=nullptr;
	size=0;
}
void student::printstudent()
{
	cout<<"student name:"<<name<<endl;
	cout<<"Username: "<<username<<endl;
	cout<<"Rollnmb:"<<rollnmb<<endl;
}
ostream& operator<<(ostream& osobject,student&a)
{
	osobject<<"Student name:"<<a.name<<endl;
	osobject<<"Student username:"<<a.username<<endl;
	osobject<<"Student Rollnmb:"<<a.rollnmb<<endl;
	return osobject;
}
student &student::operator=(student &a)
{
	this->username=a.username;
	this->rollnmb=a.rollnmb;
	this->username=a.name;
	this->size=a.size;
	for(int i=0;i<a.size;i++)
	{
		obj[size]=a.obj[i];
	}
	return *this;
}
student::student(const student&a)
{
	name=a.name;
	username=a.username;
	rollnmb=a.rollnmb;
	size=a.size;
	if(size!=0)
	{
		for(int i=0;i<size;i++)
		{
			obj[i]=a.obj[i];
		}
	}
}
void student::addcourse(course*a)
{
	if(size>=2)
		cout<<"courses full:"<<endl;
	else
	{
		if(obj==nullptr)
		{
			obj[0]=a;
			size++;
		}
		if(size==1)
		{
			obj[1]=a;
			if(obj[1]==obj[0])
			{
				cout<<"course already exist:"<<endl;
				obj[1]=nullptr;
			}

		}
	}
}
void student::dropcourse(course*a)
{

}