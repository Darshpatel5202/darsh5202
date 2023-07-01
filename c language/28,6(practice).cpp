/*#include<stdio.h>
main()
{
    int a=2,b;
    printf("enter your value ");
    scanf("%d",&b);
    (b%a==0)?printf("condition is even"):printf("condition is odd");
}
*/

#include<stdio.h>
main(){
       int num;
       printf("enter your marks ");
       scanf("%d",&num);
       if(num>100){
       	if(num>=90 && num<100){
       		printf("a grade");
		   }else if(num>=80 && num<90){
		   	printf("b grade");
		   }else if(num>=70 && num<80){
		   	printf("c grade");
		   }else if(num>=60 && num<70){
		   	printf("d grade");
		   }else{
		   	printf("fail");
		   }}else{
		   	printf("invalid input");
		   }
	   }



/*#include<stdio.h>
main(){
	int num;
	printf("enter your number ");
	scanf("%d",&num);
	if(num<100){
	
	if(num>=90 && num<100){
		printf("A Grade !!!");
	}else if(num>=80 && num<90){
		printf("B Grade !!");
	}else if(num>=60 && num<80){
		printf("C Grade !");
	}else if(num>=45 && num<60){
	        printf("D Grade");
        }else{
	        printf("Fail");
        }}else{
	        printf("invalid input");
        }

}*/



