#include <stdio.h>
#include <stdlib.h>

int main (){
//quiero saber el resultado de 1/3 + 3/6 + 1/30
double a = 1;
double b = 3;
double c = 6;
double d = 30;
printf ("%f", a / b);
printf("\n");
printf ("%f", b / c);
printf("\n");
printf ("%f", a / d);
printf("\n");
//quiero saber la suma del resultado de las divisiones anteriores 
printf("%f", a / b + b / c + a / d);
printf("\n");
printf("%f", ( a / b + b / c + a / d) / 23 );
printf("\n");
printf("%f", (( a / b + b / c + a / d) / 23) / 30);
printf("\n");
return 0;
}