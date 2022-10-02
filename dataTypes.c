#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
d, s and f are important when printing as they can pass different types of variables
%d = int
%f = float
%s = char
*/

int main()
{
int number = 43;
double var_float = 40.0;
char grade = "A";
char phrase[] = "String of char";


printf("%f", pow(2.0,3.0));
return 0;
}