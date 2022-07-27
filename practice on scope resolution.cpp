#include<iostream>
using namespace std;
class Area
{
	float length,width;
	public:
	void setDim();
	void getData();
	void subData();
	void addData();
	void multiData();
	void divData();
	
};
	void Area::setDim()
	{
		cout<<"ENTER LENGTH OF RECTANGLE : ";
		cin>>length;
		cout<<"ENTER WIDTH OF RECTANGLE : ";
		cin>>width;
		cout<<"\n\n\t\t....................";
	}
	void Area::getData(){
		cout<<"\n\nYOUR DATA OF RECTANGLE IS AS FOLLOW\n\n";
		cout<<"LENGTH OF RECTANGLE IS : "<<length;
		cout<<"\nWIDTH OF RECTANGLE IS : "<<width;
		cout<<"\n\n\t\t....................";
	}
	void Area::subData(){
		cout<<"\n\n\n\nYOUR DATA OF RECTANGLE AFTER SUBTRACTION IS AS FOLLOW\n\n";
		float subtract=length - width;
		cout<<"DATA OF RECTANGLE AFTER SUBTRACTION IS : "<<subtract;
		cout<<"\n\n\t\t....................";
	}
	void Area::addData(){
		cout<<"\n\n\n\nYOUR DATA OF RECTANGLE AFTER ADDITION IS AS FOLLOW\n\n";
		float addition=length + width;
		cout<<"DATA OF RECTANGLE AFTER SUBTRACTION IS : "<<addition;
		cout<<"\n\n\t\t....................";
	}
	void Area::multiData(){
		cout<<"\n\n\n\nYOUR DATA OF RECTANGLE AFTER MULTIPLICATION IS AS FOLLOW\n\n";
		float multiply=length * width;
		cout<<"DATA OF RECTANGLE AFTER MULTIPLICATION IS : "<<multiply;
		cout<<"\n\n\t\t....................";
	}
	void Area::divData(){
		cout<<"\n\n\n\nYOUR DATA OF RECTANGLE AFTER SUBTRACTION IS AS FOLLOW\n\n";
		float division=length / width;
		cout<<"DATA OF RECTANGLE AFTER DIVISION IS : "<<division;
		cout<<"\n\n\t\t....................";
	}

int main(){
	cout<<"\n\t********** WELL TO THE PROGRAMMING **********\n\n";
	Area a;
	a.setDim();
	a.getData();
	a.subData();
	a.addData();
	a.multiData();
	a.divData();
	cout<<"\n\t**********THE END**********";
}

//using scope resolution operator
/*
#include<iostream>
using namespace std;
class Array
{
	int arr[5];
	public:
	void input();
	void display();
	void max();
	void min();
};
 void Array::input(){
 	cout<<"ENTER FIVE NUMBERS : \n";
	for(int i=0;i<5;i++)
	cin>>arr[i];
	cout<<"\n";
 }
 
 void Array::display(){
 	cout<<"FIVE NUMBERS THAT YOU HAVE INPUT ARE AS FOLLOW : \n";
	for(int i=0;i<5;i++)
	cout<<arr[i]<<endl;
	cout<<"\n";	 
 }
 
 void Array::max(){
 	int mx=arr[0]; 
	for(int i=0;i<5;i++)
	if(mx<arr[i])
	mx=arr[i];
	cout<<"MAXIMUN NUMBER IN ARRAY IS : "<<mx<<endl;
 }

void Array::min(){
 	int mn=arr[0]; 
	for(int i=0;i<5;i++)
	if(mn>arr[i])
	mn=arr[i];
	cout<<"MINIMUN NUMBER IN ARRAY IS : "<<mn;
}
 
 int main(){
 	Array a;
 	a.input();
 	a.display();
 	a.max();
 	a.min();
}*/
