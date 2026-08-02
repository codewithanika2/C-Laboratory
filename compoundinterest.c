#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main(){

 //COMPOUND INTEREST CALCULATOR

 double principal=0.0;
 double rate=0.0;
 int years=0;
 int timescompounded=0;
 double total=0.0;

 printf("Compound Interest Calculator\n");

 printf("Enter the principal(P):");
scanf("%lf", &principal);

printf(" Enter the interest rate (r):% ");
scanf("%lf", &rate);

rate=rate/100;

printf("Enter the number of years(t):");
scanf("%d", &years);

printf("Enter number of times compounded per year(n):");
scanf("%d", &timescompounded);

total= principal * pow(1+ rate/timescompounded, timescompounded * years );

printf("After %d year/s, the total amount will be $%.2lf", years, total);









return 0;
}




