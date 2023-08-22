/*
there are 5 types of iheritense
1)single

class demo{
function
} class 2{

}
*/

#include<iostream>
using namespace std;
class A{
	public:
	void display(){
	cout<<"this is parent class";
}
};
class B :public A{
	
};

main(){
	B obj;
	obj.display();
}
