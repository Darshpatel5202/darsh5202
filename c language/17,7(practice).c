/*
srno  name   field  clas marks
1     darsh  btech  sci   90
2     sahil  btech  comm  70
3     herry  be     sci   60
4     hardik  bcom  comm  25
5     ronak  bcom   bcom  40
*/

#include <stdio.h>

struct Student {
    int srno,marks;
    char name[20],field[20],clas[20];   
};

main() {
    struct Student students[5];
    int i;
    
    for (i=0;i<5;i++) {
        
        printf("Serial Number: ");
       scanf("%d", &students[i].srno);
        
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Field: ");
        scanf("%s", students[i].field);
        
        printf("Class: ");
        scanf("%s", students[i].clas);
        
        printf("Marks: ");
        scanf("%d", &students[i].marks);
        
        printf("\n");
    }
    
    printf("SR. No.  Name     Field   Class   Marks\n");
    printf("---------------------------------------\n");
    
    for (i=0;i<5;i++) {
        printf("%-8d %-8s %-7s %-7s %-5d\n", students[i].srno, students[i].name, students[i].field, students[i].clas, students[i].marks);
    }
    
    return 0;
}

