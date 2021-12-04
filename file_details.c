#include<stdio.h>
void main()
{
    FILE *write;
    FILE *read;

    char names[3][10];
    int age[3];
    float height[3];

    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter your name\n");
        scanf("%s",names[i]);
        printf("Enter your age\n");
        scanf("%d",&age[i]);
        printf("Enter your height\n");
        scanf("%f",&height[i]);
    }
    write=fopen("student_details.txt","w");
    if(write==NULL)
    {
        printf("Could not open the file\n");

    }
    else
    {
        int j;
        for(j=0;j<3;j++)
        {
            fprintf(write,"%s\n%d\n%.2f\n",names[j],age[j],height[j]);
        }
    }
    fclose(write);
    read=fopen("student_details.txt","r");
    char names1[3][10];
    int age1[3];
    float height1[3];
    if(read==NULL)
    {
        printf("The file could not be opened for reading\n");
    }
    else
    {

            int k;
            for(k=0;k<3;k++)
            {
                fscanf(read,"%s",names1[k]);
                fscanf(read,"%d",&age1[k]);
                fscanf(read,"%f",&height1[k]);

            }

        int m;
        printf("These are the values of details saved to file\n");
        for(m=0;m<3;m++)
        {

            printf("Names : %s \n",names1[m]);
            printf("Age : %d \n",age1[m]);
            printf("Height : %f \n",height1[m]);
        }
        printf("\n");
    }
  fclose(read);

}
