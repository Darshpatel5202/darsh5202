/*
multilevel inheritense
*/

#include<iostream>
using namespace std;

class a{
	public:
		void display()
		{
			cout<<"this is grandfather class";
		}
};

class b:public a{
	public:
		void display2()
		{
			cout<<"\nthis is fathers class";
		}
};

class c:public b{
	public:
		void son()
		{
			cout<<"\nthis is son";
		}
};

main()
{
	c obj;
	obj.display();
	obj.display2();
	obj.son();
}
