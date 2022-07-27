#include <iostream>
using namespace std;

class Area
{
   private:
	int length;
	int width;
	int area;
    string *name;
	
   public:
    Area() 
	{ 
	length=0;
	width=0;
	name=new string;
	}
	
   void setData(int l,int w,string *n)
   {
   	 length=l;
   	 width=w;
   	 name=n;
   }   
   void calArea()
   {
   	 area = length * width;
   }
   void display()
   {
   	 cout << " Area of Rectangle is : " << area;
   	 cout << " Name of Rectangle is : " << *name;
   }
   //Deep C//
   Area (Area & a)
   {
   	 name=new string;
   	 length=a.length;
   	 width=a.width;
   	 area=a.area;
   	 *name=*(a.name);
   }
};
int main()
{
    int length;
	int width;
	int area;
	string name;
	
	cout << " Enter Length : ";
	cin >> length;
	
	cout << " Enter Width : ";
	cin >> width;
	
	cout << " \nEnter Name of Rectangle : ";
	cin >> name;
	cout<<endl;
	
	Area obj1;
	obj1.setData(length,width,&name);
	obj1.calArea();
	obj1.display();
    cout << "\n\n***After Using deep Copy***\n";
    Area obj2(obj1);
    obj2.display();

return 0;
}

/*
#include<iostream>
using namespace std;
class Area
{
	float length;
	float width;
	float area;
	public:
	Area(){
		length=0;
		width=0;
	}
	int setdata(float l,float w)
	{
		length=l;
		width=w;	
	}
	int calarea(){
		area = length*width;
	}
	int display(){
		cout<<"area is "<<area;
	}
	Area(Area&a)
	{
		length=a.length;
		width=a.width;
		area=a.area;
	}
};
int main()
{
	Area a1;
	float length;
	float width;
	float area;
	
	cout<<"enter length"<<endl;
	cin>>length;
	cout<<"enter width"<<endl;
	cin>>width;
	a1.setdata(length,width);
	a1.calarea();
	a1.display();
	cout<<"\n\nafter deep copy\n";
	Area a2=a1;
	a2.display();
}










*/









