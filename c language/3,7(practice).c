#include<stdio.h>
main()
{
	int row,col;
	for(row=10;row>=1;row--)
	{for(col=1;col<=row;col++){
		printf("%d",col);
	}
	printf("\n");
	}
}
