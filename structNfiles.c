#include <stdio.h>
#include <stdlib.h>

char courses[7][10];
char student_name[50];
char registration_number[30];
int grades[7];
char grading[7]; // store grades for each mark
 int total;
 float stddevia[7], mean_stddevia;

void main()
{
  printf("SCHOOL SYSTEM\n");
  registerStudent();
   printf("\n");
 displayMenu();
}





// enroll a student
void registerStudent(){
printf("Enter name of student: ");
scanf("%[^\n]s", &student_name);
printf("Enter admission number of student: ");
scanf("%s", &registration_number);
}
// end enroll a student

// display menu
void displayMenu(){
    int menu_value;
printf("SELECT TASK: \n1. Enter marks\n2. Grade marks\n3. Calculate the total\n4. Find standard deviation of the marks\n5. Exit\n");
printf("Enter value of interest: ");
scanf("%d", &menu_value);
switch(menu_value){
case 1:
    // Enter marks
getMarks();
    break;
    case 2:
    // GRADE MARKS
    gradeMarks();
    break;
    case 3:
    //  Calculate the total
    totalMarks();
    break;
    case 4:
    // deviation
    standardDeviation();
    break;
    case 5:
    // exit
    printf("YOU HAVE EXITED!");
    break;
    default:
        // default response
        printf("INVALID SELECTION");
        break;
}
}
// end display menu

// STANdard deviation
void standardDeviation(){
//   Work out the Mean (the simple average of the numbers)
//total = 407;
if (total == 0){
    getMarks();
} else {
float mean = total / 7;
//  Then for each number: subtract the Mean and square the result.
float devia, total_stddevia;
for(int i=0; i< 7; i++){
  devia = grades[i]-mean;
  stddevia[i] = devia * devia;
   // printf("%f\n",  stddevia[i] );
   //  Then work out the mean of those squared differences.
 total_stddevia = total_stddevia + stddevia[i];
}

mean_stddevia = total_stddevia/ 7;
//printf("%f\n",  mean_stddevia );
// Take the square root of the mean of the squared differences
squareRoot();
}



}// end STANdard deviation

// CALCUlate total
void totalMarks(){

       for(int i=0; i< 7; i++){
         if(grades[i] == 0){
        getMarks();
    } else {
      total = total + grades[i];
    }
      }


printf("TOTAL MARKS: %d", total);
printf("\n");
reselectMenu();

}
// end calculate total

void reselectMenu(){
    int menu;
printf("do you wish to proceed? 1. yes 2. no\n");
printf("enter value: ");
scanf("%d", &menu);
if (menu == 1){
    displayMenu();
} else{
printf("YOU HAVE EXITED\n");
}
}

// enter grades
void getMarks(){
    for(int i=0; i< 7; i++){
     printf("Enter course name : "); // get course name
     scanf("%s", courses[i]);
     printf("Enter grades for %s: ", courses[i]); // request marks for the course
     scanf("%d", &grades[i]);
    }
totalMarks();
   // printf("%s %d", courses[0], grades[0]);
reselectMenu();
}// end enter grades

// grade marks
void gradeMarks(){
// 100 -85:A 84-79: B 78-63: C 62-47: D ELSE : E
for(int i=0; i< 7; i++){
        if(grades[i] <= 100 && grades[i] >= 85){
            grading[i] = 'A';
        } else if(grades[i] <= 84 && grades[i] >= 79){
        grading[i] = 'B';
        } else if(grades[i] <= 78 && grades[i] >= 63){
         grading[i] = 'C';
        } else if(grades[i] <= 62 && grades[i] >= 47){
         grading[i] = 'D';
        } else if(grades[i] <= 47 && grades[i] > 0){
         grading[i] = 'E';
        } else{
        //grading[i] = 'X';
        getMarks();
        }
}
displayResults();
printf("\n");
reselectMenu();
}
// end grade marks
// display graded marks
void displayResults(){
     printf("%s\n", student_name);
      printf("\t%s \t%s \t%s\n", "COURSE", "MARKS", "GRADE");
for(int i=0; i< 7; i++){


 printf("\t%s \t%d \t%c\n", courses[i], grades[i], grading[i]);
}
}
// end display graded marks

// capture courses to be done
void courseUnits(){
for(int i=0; i< 7; i++){
    printf("Enter course name to be covered: ");
    scanf("%s", courses[i]);
}
//printf("%s", courses[0]);
} // end capture courses to be done


void squareRoot(){

    printf("The Square root is  %f ",sqrt(mean_stddevia));
}

