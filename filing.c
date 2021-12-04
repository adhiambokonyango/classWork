#include<stdio.h>
void main()
{
char courses[7][10];
    //"CSC111 CSC115 CSC113 CSC126 CCS009 CCS001 CCS112";
int marks[7], j;
char grade[7];

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
   /*
    printf("Enter your name\n");
    scanf("%s",name);
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter your weight\n");
    scanf("%f",&weight);
*/
    FILE *fptointer;
    fptointer=fopen("tests.txt","w");
    FILE *read;
    read=fopen("tests.txt","r");
    if (fptointer==NULL)
    {
        printf("The file could not be opened\n");
    }
    else
    {
     printf("\n\n");
        fprintf(fptointer, "\t%s \t%s \t%s \n", "courses" "marks", "grade");
     for(int i=0; i< 7; i++){
    // fprintf(fptointer,"%s \n",&courses[i]);

fprintf(fptointer, "\t%s \t%d \t%c \n",&courses[i], &marks[i], &grade[i]);

     }

        printf("Data saved successfully\n");
    }


    fclose(fptointer);
//Reading from a file
//variables to store data read from a file
//char courses_[7][10];
//"CSC111 CSC115 CSC113 CSC126 CCS009 CCS001 CCS112";
//int marks_[7];
//char grade_[7];

    if (read==NULL)
    {
        printf("FIle could not open\n");
    }
    else
    {
        fscanf(read,"%s",&courses);
        fscanf(read,"%d",&marks);
        fscanf(read,"%c",&grade);

        printf("\n\n");
        printf("\t%s \t%s \t%s \n", "courses" "marks", "grade");
        for(int i=0; i< 7; i++){
       //  printf("The file data is  %s",&courses[i]);
printf("\t%s \t%d \t%c \n",courses[i], marks[i], grade[i]);
        }
    }
    fclose(read);

}


