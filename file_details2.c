#include<stdio.h>
void main()
{
    FILE *write;
    FILE *read;
    int age=30;
    char names[10]="Selina";
    float height=5.6;

    write=fopen("test.txt","w");
    if(write==NULL)
    {
        printf("File is not created\n");
    }
    else
    {
        //Made fprintf to write to a new line, solved the class bug
        fprintf(write,"%d\n%s\n%f\n",age,names,height);
    }
    fclose(write);

    read=fopen("test.txt","r");
    if(read==NULL)
    {

        printf("Could not open the file for reading\n");

    }
    else
    {

        int age1;
        char names1[10];
        float height1;
        fscanf(read,"%d%s%f",&age1,names1,&height1);
        //fscanf(read,"%s",names1);
        //fscanf(read,"%f",&height1);

        printf("%d, %s, %.2f\n",age1,names1,height1);


    }
    fclose(read);
}
