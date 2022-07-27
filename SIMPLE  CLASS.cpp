//AVERAGE OF THREE STUDENTS MARKS
/*
#include<iostream>
using namespace std;
class MARKS
{
	int marks;
	public:
		void in()
		{
			cout<<"Please enter your marks "<<endl;
			cout<<"Enter student marks "<<endl;
			cin>>marks;
		}
		void sum()
		{
			cout<<"Display yuor student marks "<<endl;
			cout<<"Student MARKS ARE = " << marks;
		}
		void avg()
		{
			float average,sum;
			sum=marks;
			average=sum/3;
			cout<<"/nAverage of marks is = "<<average<<endl;
			cout<<"\n\n";
		}
};
int main()
{
	int x;
	
	MARKS M1,M2,M3;
	M1.in();
	M1.sum();
	M1.avg();
	M2.in();
	M2.sum();
	M2.avg();
	M3.in();
	M3.sum();
	M3.avg();
}

\\Display data of latest car

#include<iostream>
using namespace std;
class CAR{
	int price;
	string color;
	int year;
	public:
	void in(){
		cout<<"ENTER CAR DEATIL\n";
		cout<<"ENTER CAR PRICE : ";
		cin>>price;
		cout<<"ENTER CAR COLOR : ";
		cin>>color;
		cout<<"ENTER CAR YEAR : ";
		cin>>year;
		cout<<"\n\n";
	}             
	int getyear(){
		return 0;
	}
	void out(){
		cout<<"\n\nCAR DEATILS ARE AS FOLLOW\n";
		cout<<"\nCAR PRICE : "<<price;
		cout<<"\nENTER CAR COLOR : "<<color;
		cout<<"\nENTER CAR YEAR : "<<year;
	}         
};
main(){
	CAR car1,car2;
	car1.in();
	car2.in();
	int y1,y2;
	if(y1>y2)
	car1.out();
	else
	car2.out();
}
*/
//input or output by class 

#include<iostream>
using namespace std;
class CAR
{
	int year;
	int price;
	string color;
	public:
	void inp(){
		cout<<"ENTER CAR YEAR : ";
		cin>>year;
		cout<<"ENTER CAR PRICE : ";
		cin>>price;
		cout<<"ENTER CAR COLOR : ";
		cin>>color;
	}	
	void disp(){
		cout<<"\n\nDISPALY DATA OF CAR ";
		cout<<"\n\nCAR YEAR : "<<year;
		cout<<"\nCAR PRICE : "<<price;
		cout<<"\nCAR YEAR : "<<year;
	}
};

int main(){
	CAR c;
	c.inp();
	c.disp();
}

/*#include<iostream>
#include<string>
using namespace std;
class player
{
	
	float pavg;
	string pname, pteam;
	public:
	void input()
	{
	
	cout<<"\nENTER PLAYER AVERAGE : ";
	cin>>pavg;
	cout<<"ENTER PLAYER NAME : ";
	cin>>pname;
	cout<<"\nENTER PLAYER TEAM : ";
	cin>>pteam;	
	}
	void output(){
		cout<<"\n\n\nDISPLAY DETAILS OF THE PLAYER \n\n";
		cout<<"PLAYER NAME IS :\t"<<pname;
		cout<<"\nPLAYER AVERAGE IS :\t"<<pavg;
		cout<<"\nPLAYER TEAM IS :\t"<<pteam;
	}
};

int main()
{	
	char x;
	player P1;
	do{	
	P1.input();
	P1.output();	
	cout<<"\n\nPRESS Y TO KEEP RUNNING THE PROGRAM "<<endl;
	cin>>x;
}
	while(x=='y');

}



//program 2

#include<iostream>
using namespace std;
class notebook
{
	
	int bookid;
	int bookchap;
	int bookprice;
	public:
		notebook()
	{
	cout<<"ENTER DETAILS OF BOOK\n\n";
	cout<<"\nENTER BOOK ID : ";
	cin>>bookid;
	cout<<"ENTER BOOK CHAPTERS : ";
	cin>>bookchap;
	cout<<"ENTER BOOK PRICE : ";
	cin>>bookprice;
	cout<<"\n\n";	
	}
	void display(){
		cout<<"\n\n\nDISPLAY DETAILS OF THE NOTEBOOK \n";
		cout<<"BOOK CHAPTERS ARE  :\t"<<bookchap;
		cout<<"\nBOOK ID IS :\t\t"<<bookid;
		cout<<"\nBOOK PRICE IS :\t\t"<<bookprice;
	}
};
		

int main()
{
	int sum=0;
	notebook n1, n2;
	int x,y;
	sum=x+y;
	if(sum%2==0)
	n1.display();
	else
	n2.display();	
}*/
