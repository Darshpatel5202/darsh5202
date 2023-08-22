#include<iostream>
using namespace std;
class cars{
	public:
		void display(){
			cout<<"this is cars class \n";
		}
};
class dep:public cars{
	public:
		void display1(){
			cout<<"this is dep class \n";
		}
};
class com:public cars{
	public:
		void abc(){
			cout<<"this is com class \n";
		}
};
class sec:public cars{
	public:
		void htj(){
			cout<<"this is sec class \n";
		}
};
int main(){
	dep obj1;
	obj1.display();
	obj1.display1();
	sec obj2;
	obj2.display();
	obj2.htj();
	com obj;
	obj.abc();
	obj.display();
	return 0;
}
