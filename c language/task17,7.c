#include<stdio.h>
main(){
	int marks,j,i,k;
	char name[30],clas[30],field[30];
    
	for(i=1;i<=5;i++){
	printf("enter your name : ");
	scanf("%s",&name);

	printf("enter your field : ");
	scanf("%s",&field);

	printf("enter your class : ");
	scanf("%s",&clas);
	
	printf("enter your marks : ");
	scanf("%d",&marks);
}for(j=1;j<=5;j++){
   printf("-----marksheet----- \n");
   
   printf("name:  %s \t",name);
   printf("field: %s \t",field);
   printf("class: %s \t",clas);
   printf("marks: %d \t",marks);
   
   printf("\n");
}

}

