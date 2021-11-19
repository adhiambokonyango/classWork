#include <stdio.h>

void main()
{
/*
char courses[2][6];
for(int i = 0; i< 2; i++){
printf("enter: ");
scanf("%s", &courses);
}
for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            //courses[i][j] = '.';
            printf("%c ", courses[i][j]);
        }

    }
    */

    char strings[3][10];
    scanf("%s", strings[0]);
    scanf("%s", strings[1]);
   // scanf("%s", strings[2]);

    printf("%s\n", strings[0]);
    printf("%s\n", strings[1]);
   //   printf("%s\n", strings[2]);

   for (int i = 0; i < 3; i++){
    printf("str: %s\n", strings[i]);
   }

}
