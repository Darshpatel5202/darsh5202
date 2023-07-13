/*
syntax:
int i;
do{
loop body;
updation;
}while(condition);
*/

#include<stdio.h>
main()
{
    int i=1;
	do{
		printf("%d \n",i);
		i++;
	}while(i<=10);	
}
