#include <iostream>
using namespace std;
class test
{
	private:
		int num;
		public:
			test()
			{
				num=2;
			}
			void operator++()//for prefix incement 
			{
				++num;
				cout<<num<<endl;
			}
					void operator++(int)//for postfix incement 
			{
				num++;
				cout<<num<<endl;
			}
			void display()
			{
				cout<<"value "<<num;
			}
			
};
int main()
{
	test t1;
	++t1;
	t1++;
	t1.display();
	return 0;
}
