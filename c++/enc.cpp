#include<iostream>
using namespace std;
class demo {
	public:
		int age;
		string name;
		void setinput(int age)
		{
			this->age=age;
		}
		int getinput()
		{
			return age;
		}
		void setinput1(string name)
		{
			this->name=name;
		}
		string getinput1()
		{
			return name;
		}
};

main(){
	demo obj;
	obj.setinput(24);
	obj.setinput1("chirag");
	cout<<obj.getinput()<<"\n";
	cout<<obj.getinput1();
}
