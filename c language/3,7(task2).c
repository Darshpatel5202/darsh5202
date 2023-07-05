#include<stdio.h>
main(){
    char row,col,count='a';
	for(row='a';row<='e';row++)
	{
		for(col='a';col<=row;col++){
			printf("%c",count);
			count++;
		}
		printf("\n");
	}
}
