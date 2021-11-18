#include<stdio.h>
void main()
{
 // Create a program that captures the marks for the seven courses you are doing and stores them in an array.

// Grade and display the marks and their corresponding grades.

// Hint: Use loops and arrays
int marks[7], j;
char grade[7];
for(j=0;j<7;j++)
        {
          printf("marks[%d]\n",j);
            scanf("%d",&marks[j]);
        }
for(j=0;j<7;j++){
          if(marks[j] < 50 && marks[j] >= 40){
           grade[j] = 'F';
          } else if(marks[j] < 60 && marks[j] >= 50){
          grade[j] = 'E';
          } else if(marks[j] < 70 && marks[j] >= 60){
           grade[j] = 'D';
          } else if(marks[j] < 80 && marks[j] >= 70){
           grade[j] = 'C';
          } else if(marks[j] < 90 && marks[j] >= 80){
           grade[j] = 'B';
          } else if(marks[j] < 100 && marks[j] >= 90){
           grade[j] = 'A';
          } else {
          grade[j] = 'X';
          }
        }
        printf("\n\n");
        printf("\t%s \t%s \n", "marks", "grade");
for(j=0;j<7;j++){

printf("\t%d \t%c \n", marks[j], grade[j]);
}


/*
 char strings[3][2];
    scanf("%s %s %s", strings[0], strings[1], strings[2]);
    printf("%s\n%s\n%s\n", strings[0], strings[1], strings[2]);

    // end*/
}
