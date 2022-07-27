//SET VALUES OF RAD,ANGLE AND DISPLAY

#include<iostream>
using namespace std;
class arc
{
	float radius;
	float arc_length;
	float angle;
	public:
	float SetRadius(float);
	float SetAngle(float);
	float SetArc_Length();
	void display () const
	{
		cout<<"\t\tYOUR ARC DETAIL IS AS FOLLOW ";
		cout<<"\nYOUR ARC RADIUS IS : "<<radius;
		cout<<"\nYOUR ARC LENGTH IS : "<<arc_length;
		cout<<"\nYOUR ARC ANGLE IS : "<<angle;
	}
};

void arc::SetRadius(float r)
{
	radius=r;
}
void arc::SetAngle(float a)
{
	angle=a;
}
void arc::SetArc_Length()
{
	cout<<" ENTER THE ARC LENGTH ";
	cin>>arc_length;
}

void main()
{
	arc obj;
	obj.radius(3.45);
	obj.angle(34.0);
	
}

