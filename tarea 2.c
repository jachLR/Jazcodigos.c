#include <stdio.h>
#include <stdlib.h>

int main (){
double a = 5;
double b = 2;
double c = 1;
double d = 4;
printf("%f", ( a + (b / c)) / ( c + ( b / ( b / ( b - ( c / d))))) );

return 0;
}