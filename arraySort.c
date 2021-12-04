#include <stdio.h>


void main()
{
   int numbers[10];
   for(int i = 0; i <10; i++){
   printf("Enter number at position: %d\n", i);
   scanf("%d", &numbers[i]);
   }
   menu();
   sortArray(numbers);
   minValue(numbers);
}

 // menu
    void menu(){
    int menu;
    printf("SELECT OPERATION\n1. Sorts the array in descending order\n2. Finds the minimum number in the array\n3. Finds the maximum number in the array\n4. Calculates the average of the array numbers\n5. Calculates the standard deviation of the numbers\n");
    printf("Enter value: ");
    scanf("%d", &menu);
       }
       // Sorts the array in descending order
       void sortDescentArray(int array[10]){
           int temp = 0;
           for(int i = 0; i <10; i++){
           // printf("%d\n", array[i]);
           // printf("%d\n", array[i+1]);
            for(int j = 0; j <10; j++){
             if (array[i] > array[j]){
                temp = array[i];
               array[i] = array[j];
               array[j] = temp;
             }
            }
           }
           for(int i = 0; i <10; i++){
            printf("%d\n", array[i]);
           }
       }// end

       //  printf("%d\n", array[i]);
       void minValue(int array[10]){
       int temp = 0;
           for(int i = 0; i <10; i++){
             if (array[i] < array[i+1]){
                temp = array[i];
             }
           }
            printf("%d\n", temp);

       } // end
