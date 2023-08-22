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
class com{
	public:
		void abc(){
			cout<<"this is com class \n";
		}
};
class sec:public dep,public com{
	public:
		void htj(){
			cout<<"this is sec class \n";
		}
};
int main(){
	dep obj;
	obj.display();
	obj.display1();
	cout<<"\n----------------------\n";
	com obj1;
	obj1.abc();
	cout<<"\n----------------------\n";
	sec obj2;
	obj2.display();
	obj2.display1();
	obj2.abc();
	obj2.htj();
	return 0;
}
