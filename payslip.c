#include<stdio.h>
typedef struct employee
{
    char names[20];
    int payroll_no;
    float basic_salary;
    float house_allowance;
    float commuter_allowance;

float gross_salary ; // Gross pay=basic salary +allowances
float paye ; // 30% of the gross pay
float net_salary; // adding the basic salary to all the allowances and subtracting the deduction.

}employee;
void main()
{
    employee employees[5];
    float nhif = 500;
float nssf = 200;

   /*
    The employees net salary is calculated by
    adding the basic salary to all the allowances and subtracting the deduction.

The deductions are as follows

PAYE (30% of the gross pay. Gross pay=basic salary +allowances)

NHIF which is a standard fee of Kshs 500

NSSF which is also a standard fee of Kshs. 200.
*/

 int i;
    for(i=0;i<5;i++)
    {

    printf("Enter records of employee %d\n",i+1);
    printf("Enter names\n");
    scanf("%s",employees[i].names);
    printf("Enter payroll no\n");
    scanf("%d",&employees[i].payroll_no);
    printf("Enter basic salary\n");
    scanf("%f",&employees[i].basic_salary);
    printf("Enter house allowance\n");
    scanf("%f",&employees[i].house_allowance);
    printf("Enter commuter allowance\n");
    scanf("%f",&employees[i].commuter_allowance);


    // gross pay for an employee
    employees[i].gross_salary = employees[i].basic_salary + employees[i].house_allowance + employees[i].commuter_allowance;
   // printf("%f\n", employees[i].gross_salary);
   // PAYE
   employees[i].paye = 0.3 *  employees[i].gross_salary;
   //printf("%f\n", employees[i].paye);
   // net salary
   employees[i].net_salary = employees[i].gross_salary - employees[i].paye;
  // printf("%f\n", employees[i].net_salary);



    }// end loop



FILE * fpointer;
fpointer = fopen("payslip.txt", "w");

if (fpointer == NULL){
printf("could not open file");

} else {

for(i=0;i<5;i++){
fprintf(fpointer, "Employee: %d\n", i);
fprintf(fpointer, "NAME: %s\n", employees[i].names);
fprintf(fpointer, "PAYROLL NO: %d\n", employees[i].payroll_no);
fprintf(fpointer, "BASIC SALARY: %.2f\n", employees[i].basic_salary);
fprintf(fpointer, "HOUSE ALLOWANCE: %.2f\n", employees[i].house_allowance);
fprintf(fpointer, "COMMUTER ALLOWANCE: %.2f\n", employees[i].commuter_allowance);
fprintf(fpointer, "GROSS PAY: %.2f\n", employees[i].gross_salary);
fprintf(fpointer, "NET PAY: %.2f\n", employees[i].net_salary);
fprintf(fpointer, "PAYE: %.2f\n", employees[i].paye);
fprintf(fpointer, "NHIF: %.2f\n", nhif);
fprintf(fpointer, "NSSF: %.2f\n", nssf);
fprintf(fpointer, "\n\n");

}// end loop

}
fclose(fpointer);



}// end main
