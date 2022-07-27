#include<iostream>
using namespace std;
/*

class counter{
	static int n;
	public:
	counter(){
		n++;
	}
	void display(){
		cout<<"NUM OF OBJECT CREATED "<<n<<endl;
	}
};

int counter::n=0;
int main(){
	counter C1,C2;
	 C2.display();
	 counter C3;
	 C3.display();
}
*/

class employee{
	static int id1;
	static int id2;
	static int id3;
	static int id4;
	static int id5;
	
	public:	
	void display()
	{
	
		cout<<"ID OF EMPLOYEE FIRST IS : "<<id1<<endl;
		cout<<"ID OF EMPLOYEE SECOND IS : "<<id2<<endl;
		cout<<"ID OF EMPLOYEE THIRD IS : "<<id3<<endl;
		cout<<"ID OF EMPLOYEE FOURTH IS : "<<id4<<endl;
		cout<<"ID OF EMPLOYEE FIFTH IS : "<<id5<<endl;
	}
};
int employee::id1=23,24;
int employee::id2=34;
int employee::id3=56;
int employee::id4=78;
int employee::id5=90;

int main()
{
	employee e;
	e.display();
}

