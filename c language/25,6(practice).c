#include<stdio.h>
main(){
	int a;
	printf("enter your number :");
	scanf("%d",&a);
	if(a>=90 && a<100){
		printf("A Grade !!!");
	}else if(a>=80 && a<90){
		printf("C Grade !");
	}else if(a>=33 && a<40){
		printf("mand mand");
	}else {
		printf("fail");
	}
}
