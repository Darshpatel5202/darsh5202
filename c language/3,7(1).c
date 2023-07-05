#include<stdio.h>
main()
{
	int row,col;
	for(row=1;row<=5;row++){
		for(col=1;col<=5;col++){
			printf("*");
		}
		printf("\n");
	}
}

/*
if we change col<=row in above code exicution will be:
*
**
***
****
*****

if we change col<=row and printf("%d",col); exicution will be:
1
12
123
1234
12345
*/
