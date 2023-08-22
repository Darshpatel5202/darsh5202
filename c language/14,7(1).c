/*
what is function ?
we use function to convert our code into small peaces,we can keep our
code neat and clean.
function are of two types :
1)user define function.
main is user define function.
2)inbuilt function.
printf and scanf is inbuilt function.

syntax:

datatype <function_name>(){
body of function
}

main()
{
    <function_name>();
}



there are 4 types of function.
1)with argument and without return type;
*/

#include<stdio.h>
main(){
	display(); //calling function
}
void display(){ //declaring function
	printf("this is display"); //body of function
}
