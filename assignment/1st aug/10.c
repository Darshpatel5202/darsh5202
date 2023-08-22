/*1*/
#include<stdio.h>
main()
{
	int days;
	printf("Enter the day ");
	scanf("%d",&days);
	
	switch(days){
		case 1:
			printf("Monday");
			break;
			
		case 2:
			printf("Tuesday");
			break;
			
		case 3:
			printf("wednesday");
			break;
			
		case 4:
			printf("Thursday");
			break;
			
	    case 5:
			printf("Friday");
			break;
			
		case 6:
			printf("Saturday");
			break;
			
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Invalid Input");
			break;
			
		
	}
}
/*2*/

#include<stdio.h>
main()
{
	char vowels;
	printf("Enter Your Letter ");
	scanf("%c",&vowels);
	
	switch(vowels){
		
		case 'a':
			printf("vowel");
			break;
			
		case 'e':
		    printf("vowel");
			break;
			
	    case 'i':
		    printf("vowel");
			break;
			
		case 'o':
		    printf("vowel");
			break;
			
		case 'u':
		    printf("vowel");
			break;
			
			
		case 'A':
			printf("vowel");
			break;
			
		case 'E':
		    printf("vowel");
			break;
			
	    case 'I':
		    printf("vowel");
			break;
			
		case 'O':
		    printf("vowel");
			break;
			
		case 'U':
		    printf("vowel");
			break;
		default:
		    printf("consolants");
			break;	
	}     
}
