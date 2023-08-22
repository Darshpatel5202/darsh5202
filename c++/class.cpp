#include<iostream>
using namespace std;

class person{   //class declaration
	public: //access public,private,protected
		void display() //member function,method
		{
			cout<<"this is person class";
		}
};

int main()
{
	person obj; //creating object
	obj.display(); //calling method
	return 0;
}
	
	
