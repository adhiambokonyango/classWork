#include <stdio.h>
int menu_value, number, counter;

void main()
{

   // render the menu
   printf("SELECT MENU \n1.Enter number\n2.Determine if Number is Even or Odd\n3.Determine if number is positive or negative\n4.Determine how many digits are in a number\n\n");
   printf("Enter value of interest: ");
   scanf("%d", &menu_value);
   displayMenu(menu_value);

}

//void initialiseView(int value){}

void displayMenu( menu_value){
switch(menu_value){
case 1:
    //  Get number
    enterNumber();
    break;
    case 2:
    //   Determine if Number is Even or Odd
    evenOdd();
    break;
    case 3:
    //  Determine if number is positive or negative
    positiveNegative();
    break;
    case 4:
    //  Determine how many digits are in a number
    numberOfDigits();
    break;
    case 5:
    //  Exit
    printf("YOU HAVE EXITED!");
    break;
    default:
        // perform task
        printf("INVALID INPUT");
        break;
}// end switch
}// end fun

int enterNumber(){
int reselectMenu;
 printf("Enter a number except zero: \n");
    scanf("%d", &number);
    printf("value entered is %d\n\n", number);
   // printf("number %d\n", number);

    printf("Do you wish to perform another task? 1. yes 2. no : ");
    scanf("%d", &reselectMenu);
    if(reselectMenu == 1){
    main();
    } else{
    printf("YOU HAVE EXITED");
    }
}// end func

void evenOdd(){
// if no val entered, ask user to enter value
if(number != 0){
 if(number % 2 == 0){
 printf("the number %d is even\n", number);
 } else {
 printf("the number %d is odd\n", number);
 }
} else{
enterNumber();
}

}// end func

void positiveNegative(){
// if no val entered, ask user to enter value
if(number != 0){
 if(number + number < 0){
printf("is negative");
} else{
printf("is positive");
}
} else{
enterNumber();
}
}// end func

void numberOfDigits(){
// if no val entered, ask user to enter value
if(number != 0){
while(number != 0 ){
number = number / 10;
counter++;
}
printf("there are %d digits", counter);
}else{
enterNumber();
}
}// end func
