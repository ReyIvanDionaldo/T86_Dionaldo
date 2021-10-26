/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
int choices, price, payment, change;
printf("[1]Pepsi(90)\n[2]Blue water(100)\n[3]Red Bull(70)\n[4]Mountain Dew(80)\n");
printf("Choice: ");
scanf("%d", &choices);

switch (choices){

  case 1:
  price = 90;
  printf("insert bill: ");
  scanf("%d", &payment);
  if(payment >=price){
    printf("you have purchased Pepsi, Thank you and Enjoy!.\n");
    change = payment - price;
    printf("Change: %d", change); 
  } else {
    printf(" Insufficient funds");
  }
  break;


  case 2:
  price = 100;
  printf("insert bill: ");
  scanf("%d", &payment);
  if (payment >=price){
  printf("you have purchased Blue water, Thank you and Enjoy!\n");
  change = payment - price;
    printf("Change: %d", change); 
  } else {
    printf(" Insufficient funds");
  }
  break;

  case 3:
  price = 70;
  printf("insert bill: ");
  scanf("%d", &payment);
  if(payment >=price){
    printf("you have purchased red bull, Thank you and Enjoy!.\n");
    change = payment - price;
    printf("Change: %d", change);
  } else {
    printf(" Insufficient funds");
  }

  break;

  case 4:
  price = 80;
  printf("insert bill: ");
  scanf("%d", &payment);
  if (payment >=price){
  printf("you have purchased Coke, Thank and Enjoy!\n");
  change = payment - price;
    printf("Change: %d", change); 
  }
   else {
    printf(" Insufficient funds");
  }
  break;
  

  default:
  printf("Invalid Input");
}
return 0;
}