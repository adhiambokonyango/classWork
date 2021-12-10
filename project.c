#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct college_year
{
int classId;
char className[50];
} college_year;

typedef struct courses
{
int coursId;
char courseName[50];
int classId;
} courses;

typedef struct student
{
int studentId;
char studentName[100];
char RegNo[50];
int classId;
char course_work[2][50];
}student;

typedef struct results
{
int resultId;
int mark;
char grade[3];
int coursId;
}results;

college_year classes[2];
student students[2];
courses course[2];
results exam_result[2];


void main()
{

int i = 0;
for( i=0;i<2;i++)
    {

    printf("Register academic year %d\n",i+1);
    printf("Enter year name\n");
    scanf("%s",classes[i].className);
    classes[i].classId=i+1;
}// end loop

 // register courses
   course_registration();
   // assign courses to students
  registration_menu();
// file
file_studentDetail();

} // end main



void registration_menu(){
int menu;
printf("SELECT MENU\n");
printf("1. Register Lecturers\n2. Enroll Student\n");
 printf("INPUT SELECTED MENU HERE: ");
scanf("%d", &menu);
if (menu == 1){
printf("Registered lecturers");
registration_menu();
} else if (menu == 2){

enrollStudent();


} else {
printf("INVALID SELECTION\n");
}
} // close

void course_registration(){
int i, year;
printf("You would like to enter courses for which academic year?\n");
   for( i=0;i<2;i++){
    printf("%d: %s\n",classes[i].classId, classes[i].className);
   }
    printf("INPUT SELECTED MENU HERE: ");
    scanf("%d", &year);
    if (year == 1 || year == 2){
    for( i=0;i<2;i++){
    course[i].coursId = i+1;
    course[i].classId = year;
    printf("Enter course code: ");
    scanf("%s", course[i].courseName);
    }
    } else {
printf("INVALID SELECTION");
}
for( i=0;i<2;i++){
printf("%s\n",  course[i].courseName);
}

}// close

void enrollStudent(){
int i, year;

 printf("You would like to enroll students for which academic year?\n");
   for( i=0;i<2;i++){
    printf("%d: %s\n",classes[i].classId, classes[i].className);
   }
    printf("INPUT SELECTED MENU HERE: ");
    scanf("%d", &year);
    if (year == 1 || year == 2){
    inputStudentDetail(year);
    } else {
printf("INVALID SELECTION\n");
}
student_menu(year);

}// close

void inputStudentDetail(int year){
int i, menu;
for( i=0;i<2;i++){
printf("Enter student name: \n");
scanf("%s", students[i].studentName);
students[i].studentId = i+1;
students[i].classId = year;
printf("Enter student registration number: \n");
scanf("%s", students[i].RegNo);

assignStudentCourses(year);

} // end loop

/*for( i=0;i<2;i++){

    printf("%s\n", students[i].studentName);
    printf("%d\n", students[i].studentId);
     printf("%d\n", students[i].classId);
}*/

}// close


// student menu
void student_menu(int year){
int menu;
printf("what do you wish to do with the student records:\n1. Enter student result\n2. Exit\n");
scanf("%d", &menu);
switch(menu){
case 1:
// results
student_result(year);
break;
case 2:
printf("EXITED");
break;
default:
printf("INVALID INPUT\n");
break;
}
}// close


void assignStudentCourses(int student_class){
int i;
     printf("The following students have been assigned year: %d courses \n");
     for( i=0;i<2;i++){
       if(students[i].classId == student_class){
            printf("%d: %s\n",i, students[i].studentName);
       }
     }
        for( i=0;i<2;i++){
    printf("NAME: %s\n", students[i].studentName);
     printf("REG NO: %s\n", students[i].RegNo);
     printf("Assigned Courses\n");
     strcpy(students[i].course_work[i], course[i].courseName);
     printf("%s\n", students[i].course_work[i]);
    }

}// close

void student_result(int student_class){
int i, selected;
     printf("students in this year include: \n");
     for( i=0;i<2;i++){
       if(students[i].classId == student_class){
            printf("%d: %s\n",i, students[i].studentName);
       }
     }

     do{

     for(int j=0; j<2;j++){
       printf("Enter results for: %s\n", students[j].studentName);
     exam_result[j].resultId = i+1;
    if(students[j].course_work[i] == course[j].courseName){
    exam_result[j].coursId = course[j].coursId;
    }
     for(int k=0;k<2;k++){
     printf("Marks for %s: ", students[k].course_work[k]);
    scanf("%d", &exam_result[k].mark);
  gradeMarks(exam_result[k].mark);
    }
     }

     } while(i < 2);

}// close

// grade marks
void gradeMarks(int mark){
// 100 -85:A 84-79: B 78-63: C 62-47: D ELSE : E

for(int i=0; i< 2; i++){
        if(mark <= 100 && mark >= 85){
            exam_result[i].grade[i] = 'A';
        } else if(mark <= 84 && mark >= 79){
        exam_result[i].grade[i] = 'B';
        } else if(mark <= 78 && mark >= 63){
         exam_result[i].grade[i] = 'C';
        } else if(mark <= 62 && mark >= 47){
         exam_result[i].grade[i] = 'D';
        } else if(mark <= 47 && mark > 0){
         exam_result[i].grade[i] = 'E';
        } else{
        exam_result[i].grade[i] = 'X';

        }
}

}// close

void file_studentDetail(){
FILE * fpointer;
fpointer = fopen("reg_system.txt", "w");
   if (fpointer == NULL){
    printf("The file could not be opened");
   } else {
        for(int i=0;i<2;i++){
            fprintf(fpointer, "NAME: %s\n", students[i].studentName);
            fprintf(fpointer, "REG NO: %s\n", students[i].RegNo);
            if(students[i].classId == classes[i].classId){
            fprintf(fpointer, "CLASS: %s\n", classes[i].className);
            }
            fprintf(fpointer, "\t%s  \t%s \t%s\n", "COURSE", "MARKS", "GRADES");

            for(int j=0;j<2;j++){
           // if(course[j].coursId == exam_result[j].coursId){
            fprintf(fpointer, "\t%s \t%d \t%c\n", students[j].course_work[j], exam_result[j].mark, exam_result[j].grade);


            }
        }

   printf(" data has been saved successfuly\n");
   }
   fclose(fpointer);
}

