#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

{
/*
int age;
printf("Please enter your age: ");
scanf("%lf", &age);
printf(" You are %d years old\n", age);
*/
/* In order to take string input, you either need to declare the size of the string, or use fgets */

char name[20];

printf("Enter your name here: ");
fgets(name, 18, stdin);
printf("your name is %s", name);
return 0;
}