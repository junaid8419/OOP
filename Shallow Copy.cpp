#include <iostream>
using namespace std;
class Area
{
   private:
	int length;
	int width;
	int area;
	
   public:
    Area() 
	{
	length=0;
	width=0;
	}
	
   void setData(int l,int w)
   {
   	 length=l;
   	 width=w;
   }   
   void calArea()
   {
   	 area = length * width;
   }
   void display()
   {
   	 cout << " Area of Rectangle is : " << area;
   }
   //Shallow C//
   Area (Area & a)
   {
   	 length=a.length;
   	 width=a.width;
   	 area=a.area;
   }
};
int main()
{
    int length;
	int width;
	int area;
	
	cout << " Enter Length : ";
	cin >> length;
	
	cout << " Enter Breadth : ";
	cin >> width;
	
	Area obj1;
	obj1.setData(length,width);
	obj1.calArea();
	obj1.display();
    cout << "\n***After Using Shallow Copy***\n";
    Area obj2(obj1);
    obj2.display();

return 0;
}
