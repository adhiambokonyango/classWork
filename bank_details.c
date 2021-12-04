#include<stdio.h>
void main()
{
// names, bank account number and bank account balance

    FILE *write;
    FILE *read;

    char names[10], account_number[10], gender[10];
    int age;
    float  account_balance;

    int i;
     printf("Enter your name\n");
        scanf("%[^\n]s",names);
        printf("Enter your age\n");
        scanf("%d",&age);
        printf("Enter your gender\n");
        scanf("%s",&gender);
          printf("Enter your account number\n");
        scanf("%s",account_number);
         printf("Enter your account balance\n");
        scanf("%f",&account_balance);



    write=fopen("bank_details.txt","w");
    if(write==NULL)
    {
        printf("Could not open the file\n");

    }
    else
    {
    // name age gender accNO accB
         fprintf(write,"%s\n%d\n%s\n%s\n%.2f\n",names,age,gender, account_number, account_balance);
    }
    fclose(write);
    read=fopen("student_details.txt","r");
    char names1[10], account_number1, gender1;
    int age1;
    float account_balance1;
    if(read==NULL)
    {
        printf("The file could not be opened for reading\n");
    }
    else
    {


                fscanf(read,"%s",names1);
                fscanf(read,"%s",account_number1);
                fscanf(read,"%s",gender1);
                fscanf(read,"%d",&age1);
                fscanf(read,"%f",&account_balance1);



        int m;
        printf("These are the values of details saved to file\n");
        printf("Names : %s \n",names1);
            printf("Age : %d \n",age1);
            printf("Gender : %s \n",gender1);
            printf("Account Number : %s \n",gender1);
             printf("Account Balance : %.2f \n",account_balance1);
        printf("\n");
    }
  fclose(read);

}

