#include<stdio.h>
main()
{
    int arr[10], evenCount=0, oddCount=0, i;
    printf("Enter any 10 elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<10; i++)
    {
        if(arr[i]%2==0)
            evenCount++;
        else{
            oddCount++;
    }
}
    printf("\nTotal Even numbers = %d", evenCount);
    printf("\nTotal Odd numbers = %d", oddCount);
}
