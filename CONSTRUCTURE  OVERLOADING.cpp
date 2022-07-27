//lecture 10

#include<iostream>
#include<string>
using namespace std;
class student
{
	int id;
	string name;
	public:
	student(){
		id=0;
		name="unknown\n";
	}
	student(int i,string n){
		id=i;
		name=n;
	}
	void show(){
	cout<<"ID : "<<id;
	cout<<"\nNAME : "<<name;	
	}
};
int main()
{
	student s1;
	student s2(203035,"Junaid AHMED");
	s1.show();
	s2.show();
}

//assignment

#include<iostream>
#include<string>
using namespace std;
class doctor
{
	int did;
	string dname;
	public:
	doctor(){
		did=0;
		dname="default\n";
	}
	doctor(int i,string n){
		did=i;
		dname=n;
	}
	void display(){
	cout<<"ID : "<<did;
	cout<<"\nNAME : "<<dname;	
	}
};
int main()
{
	doctor d1;
	doctor d2(203035,"Junaid AHMED");
	d1.display();
	d2.display();
}
