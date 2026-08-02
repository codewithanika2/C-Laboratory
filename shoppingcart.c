#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int main(){

 //SHOPPING CART PROGRAM

bool isonline=true;
if(isonline){
    printf("WELCOME TO OUR CAFE!!\n");
    printf("Kindly place your order below\n");
}
else{
    printf("OOPS!! LOOKS LIKE YOU ARE OFFLINE!!\n");
    printf("Please try again later.");
}
char name[30]="";
int quantity=0;
float price=0.f;
float total=0.f;

printf("What item would you like to buy?:");
fgets(name,sizeof(name),stdin);
name[strlen(name) -1]='\0';

printf("What is the price for selected item?:$");
scanf(" %f",&price);

printf("Enter the quantity for the selected item:");
scanf("%d",&quantity);

total= price*quantity;

 printf("FOLLWING IS THE SUMMARY OF YOUR ORDER\n");
 printf("You have ordered %d %s/s costing $ %.2f each. The total cost of your order is $%.2f.\n",quantity,name,price,total);
printf("Thank you for shopping with us. Have a great day ahead!");


return 0;
}









