#include <stdio.h>
#include <stdlib.h>

int main()
{
int CSC111, CSC112, CSC113, CSC115, CSC126, CCS001, CCS009;
char  grade111, grade112, grade113, grade115, grade126, grade001, grade009;

// grading function
 printf("GRADING SYSTEM");


 printf("enter score and grade for CSC 111: ");
 scanf("%d %c", &CSC111, &grade111);

 printf("enter score and grade for CSC CSC112: ");
 scanf("%d %c", &CSC112, &grade112);

 printf("enter score and grade for CSC 113: ");
 scanf("%d %c", &CSC113, &grade113);

 printf("enter score and grade for CSC 115: ");
 scanf("%d %c", &CSC115, &grade115);

 printf("enter score and grade for CSC 126: ");
 scanf("%d %c", &CSC126, &grade126);

 printf("enter score and grade for CCS 001: ");
 scanf("%d %c", &CCS001, &grade001);

 printf("enter score and grade for CCS 009: ");
 scanf("%d %c", &CCS009, &grade009);


 printf("\tCourse Code:       \tMarks:      \tGrade\n");
 printf("\tCSC111                 \t%5d        \t%5c\n", CSC111, grade111);
 printf("\tCSC112                 \t%5d        \t%5c\n", CSC112, grade112);
 printf("\tCSC113                 \t%5d        \t%5c\n", CSC113, grade113);
 printf("\tCSC115                 \t%5d        \t%5c\n", CSC115, grade115);
 printf("\tCSC126                 \t%5d        \t%5c\n", CSC126, grade126);
 printf("\tCCS001                 \t%5d        \t%5c\n", CCS001, grade001);
 printf("\tCCS009                 \t%5d        \t%5c\n", CCS009, grade009);

    return 0;
}
