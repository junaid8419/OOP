/*suppose we have 5 students in a class and we have to input the name
and marks of all the 5 students. Create 5 different objects and 
then input the name and marks of all those 5 students. To make 
the program easy create an array of objects as we do in case of 
other data-types.
*/

#include<iostream>
#include<string>
using namespace std;
 class student
 {
 	string name[5];
 	int marks[5];
 	public:
 		void getdata()
 		{
 			for(int i=0;i<5;i++)
 			{
 				cout<<"ENTER NAME OF STUDENT "<<i<<endl;
 				cin>>name[i];
 				cin.ignore();
 				cout<<"ENTER MAKS OF THE STUDENT "<<i<<endl;
 				cin>>marks[i];
 				cout<<endl;
			 }
			 
		 }
		 void display()
		 {
		 	 			for(int i=0;i<5;i++)
 			{
 				cout<<"\n\nNAME OF "<<i<<" STUDENT "<<name[i];
 				cout<<"\nMARKS OF "<<i<<" STUDENT "<<marks[i];
			 }
			 
		 }
 };
 
 int main()
 {
 	
 student s1;
 s1.getdata();
 s1.display();
 return 0;
}
