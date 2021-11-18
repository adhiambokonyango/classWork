#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int menu_value, level, counter, first_number, second_number, total_result;
void main()
{
  // render the menu
   printf("SELECT MATH OPERATION \n1.Addition\n2.subtraction\n3.division\n4.multiplication\n5.Exit\n");
   printf("Enter value of interest: ");
   scanf("%d", &menu_value);
   displayMenu(menu_value);
}

void displayMenu( menu_value){
switch(menu_value){
case 1:
    //  Addition
    printf("\n\nADDITION\n");
    selectLevel();
    printf("\n");
    display(1);
    break;
    case 2:
    //   subtraction
    printf("\n\nSUBTRACTION\n");
    selectLevel();
    printf("\n");
    display(2);
    break;
    case 3:
    // Division
    printf("\n\nDIVISION\n");
    selectLevel();
    printf("\n");
    display(3);

    break;
    case 4:
    // multiplication
    printf("\n\nMULTIPLICATION\n");
    selectLevel();
    printf("\n");
    display(4);
    break;
    case 5:
    //  Exit
    printf("YOU HAVE EXITED!");
    printf("TOTAL POINTS: %d\n", total_result);
    break;
    default:
        // perform task
        printf("INVALID INPUT");
        break;
}// end switch
}// end fun


// select level
void selectLevel(){

printf("Which level do you wish to play: \n 1. low level: level >= 1 && level <= 10\n 2. mid level: level >= 11 && level <= 50\n 3. high level: level >= 51 && level <= 100\n");
printf("Enter the level you wish to play: ");
scanf("%d", &level);

if(level == 1){ // low
// gen random values
randomFunction('L');
printf("first value: %d\nsecond value: %d\n", first_number, second_number);
} else if(level == 2){// mid
randomFunction('M');
printf("first value: %d\nsecond value: %d\n", first_number, second_number);
}else if(level == 3){// high
randomFunction('H');
printf("first value: %d\nsecond value: %d\n", first_number, second_number);
} else{
printf("INVALID LEVEL\n");
}

}// func

void randomFunction(char level){
 //srand sets the seed for the random numbers
    //time is used to set the seed to the current time
    //without setting the seed using srand() rand() will generate the same number all the time
    srand(time(0));
    //Generating random numbers between 1 and 10
    if(level == 'L'){
     int random=(rand()%10+1);
    first_number = random;
      int random1=(rand()%10+1);
    second_number = random1;
    } else if(level == 'M'){
    int random=(rand()%10+10+10+10+10);
    first_number = random;
      int random1=(rand()%10+10+10+10+10);
    second_number = random1;
    }else if(level == 'H'){
     int random=(rand()%10+10+10+10+10+10+10+10+10+10);
    first_number = random;
      int random1=(rand()%10+10+10+10+10+10+10+10+10+10);
    second_number = random1;
    }

    //Generating random numbers between 10 and 20. The number before the % indicates the range of the random numbers
    //The number after the plus is the starting point of the range
    //int random1=(rand()%10+10+10);
    //second_number = random1;
   // printf("%d %d ",random, random1);
}// func

void display(int selection){
int result;
//print out information based on user selection
if (selection == 1){ // addition
printf("%d + %d = ", first_number, second_number);
scanf("%d", &result);
if(first_number + second_number == result){
printf("YOU WIN!\n");
total_result++;
reselectMenu();
} else{
printf("YOU LOSE\n");
reselectMenu();
}
} // end addition

else if (selection == 2){ // subtraction
printf("%d - %d = ", first_number, second_number);
scanf("%d", &result);
if(first_number - second_number == result){
printf("YOU WIN!");
total_result++;
reselectMenu();
} else{printf("YOU LOSE");
reselectMenu();}
} // end subtraction

else if (selection == 3){ // division
printf("%d / %d = ", first_number, second_number);
scanf("%d", &result);
if(first_number / second_number == result){
printf("YOU WIN!");
total_result++;
reselectMenu();
} else{printf("YOU LOSE");
reselectMenu();}
} // end division

else if (selection == 4){ // multiplication
printf("%d * %d = ", first_number, second_number);
scanf("%d", &result);
if(first_number * second_number == result){
printf("YOU WIN!");
total_result++;
reselectMenu();
} else{printf("YOU LOSE");
reselectMenu();}
} // end multiplication

else {
printf("value provided is invalid");
} // end addittion
}// func

void reselectMenu(){
int proceed;
printf("do you wish to proceed: \n1. yes \n2. no\n");
printf("response: ");
scanf("%d", &proceed);
if(proceed == 1){
main();
} else{
printf("TOTAL POINTS: %d\n", total_result);
printf("YOU HAVE EXITED!");

}
}
