#include<stdio.h>
void main()
{

// declare file pouinters for reading and writing
FILE *write;
FILE *read;

write = fopen("finputfget.txt", "w");
read = fopen("finputfget.txt", "r");

if (write == NULL){
printf("could not open file");
} // end if
else{
fputs("Hello everyone, Welcome to files\nHope you are enjoying\n",write);
} // end else
fclose(write);

char target[100];
if (read == NULL){
printf("could not open file for reading");
} // end if
else{
while(!feof(read)){
fgets(target, 100, read);
printf("%s", target);
}
}// end else
fclose(read);

} // end main
