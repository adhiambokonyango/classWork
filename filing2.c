#include <stdio.h>
#include <stdlib.h>

void main()
{

//char name[20];
char courses[7][10];
//int age;
int marks[7], j;
//float weight;
char grade[7];


/*
printf("Enter your name: \n");
scanf("%s", name);
printf("enter your age: \n");
scanf("%d", &age);
printf("enter weight:\n");
scanf("%f", weight);
*/

// enter courses
    for(int i=0; i< 7; i++){
    printf("Enter course name to be covered: ");
    scanf("%s", courses[i]);
}

// enter marks for each course
for(j=0;j<7;j++)
        {
          printf("Enter marks for %s: ", courses[j]);
            scanf("%d",&marks[j]);
        }

// grade each course
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


FILE *fptointer;
fptointer=fopen("graded_marks.txt", "w");
FILE *read;
read=fopen("user.txt", "r");
if(fptointer == NULL){
printf("this file could not be opened");
} else{

 for(int i=0; i< 7; i++){
// fprintf(fptointer, "%s %d %f\n", name, age, weight);
fprintf(fptointer, "%s %d %c\n", courses[i], marks[i], grade[i]);
 } // end for


printf("data saved successfuly\n");
}

fclose(fptointer);
// reading from a file
// variable to store data read from a file

//char names1[10];
char courses_[7][10];
//int age1;
int marks_[7];
//float weight1;
char grade_[7];


if (read == NULL){
printf("file could not open\n");
} else{
fscanf(read, "%s %d %c", courses_, &marks_, &grade_);
printf("file data is: \n");
 for(int i=0; i< 7; i++){
 printf(" %s %d %c\n", courses[i], marks[i], grade[i]);
 }

}
fclose(read);


} // end main
