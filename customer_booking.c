#include <stdio.h>

char flight_no[10], customer_name[10], passport_no[10], origin[10], destination[10];
int seats;
float total_cost=0, discounted_cost=0;


void main()
{



captureDetails();

filing();


} // end main





/*
1. Flight no

2. Customer name

3. Customer passport no

4. Customer origin airport and destination airport.

5. Number of seats the customer is booking

6. Total cost that the customer is supposed to pay
*/

void captureDetails(){
        printf("Enter your Flight no\n");
        scanf("%s",&flight_no);

        printf("Enter your Customer name\n");
        scanf("%s",&customer_name);

        printf("Enter your passport no\n");
        scanf("%s",&passport_no);

        printf("Enter your origin airport\n");
        scanf("%s",&origin);

        printf("Enter your destination airport\n");
        scanf("%s",&destination);

        printf("Enter Number of seats\n");
        scanf("%d",&seats);
        costFunc(seats);
        expectedCost(seats);
}

void costFunc(int seat){
float cost_pa_seat = 10000;
if(seat == 1){
discounted_cost = 10000;
} else{

discounted_cost = 0.05 * cost_pa_seat * seat;
printf("%f", discounted_cost);
}
}

void expectedCost(int seat){
float cost_pa_seat = 10000;
total_cost = seat * cost_pa_seat;
}





void filing(){
FILE *fptointer;
fptointer=fopen("customer_booking.txt", "w");
FILE *read;
read=fopen("customer_booking.txt", "r");
if(fptointer == NULL){
printf("this file could not be opened");
} else{

printf("\n\n");
// fprintf(fptointer, "\t%s \t%s \t%s \t%s \t%s \t%s\n", "FLIGHT NO", "CUSTOMER NAME", "PASSPORT NO",  "ORIGIN", "DESTINATION", "NUMBER OF SEATS", "TOTAL COST", "DISCOUNTED COST");
fprintf(fptointer, "\t%s \t%s \t%s \t%s \t%s \t%d \t%.2f \t%.2f\n", &flight_no, &customer_name, &passport_no, &origin, &destination, &seats, &total_cost, &discounted_cost);



printf("data saved successfuly\n");
}

fclose(fptointer);
// reading from a file
// variable to store data read from a file




char flight_no1[10], customer_name1[10], passport_no1[10], origin1[10], destination1[10];
int seats1;
float total_cost1, discounted_cost1;


if (read == NULL){
printf("file could not open\n");
} else{
fscanf(read, "%s %s %s %s %s %d %.2f %.2f", flight_no1, customer_name1, passport_no1, origin1, destination1, &seats1, &total_cost1, &discounted_cost1);
printf("file data is: \n");
printf("\t%s \t%s \t%s \t%s \t%s \t%s\n", "FLIGHT NO", "CUSTOMER NAME", "PASSPORT NO",  "ORIGIN", "DESTINATION", "NUMBER OF SEATS", "TOTAL COST", "DISCOUNTED COST");
printf("\t%s \t%s \t%s \t%s \t%s \t%d \t%.2f \t%.2f", flight_no1, customer_name1, passport_no1, origin1, destination1, seats1, &total_cost1, &discounted_cost1);
}
fclose(read);
}





