#include <stdio.h>
int main()
{
int choices, price, payment, change;
printf("[1]Pepsi(50)\n[2]Coke(60)\n[3]Royal(70)\n[4]Mountain Dew(80)\n");
printf("Choice: ");
scanf("%d", &choices);

switch (choices){

  case 1:
  price = 50;
  printf("insert coin: ");
  scanf("%d", &payment);
  if(payment >=price){
    printf("you have purchased Pepsi, Enjoy!.\n");
    change = payment - price;
    printf("Change: %d", change);
  } else {
    printf(" Insufficient funds");
  }
  break;


  case 2:
  price = 60;
  printf("insert coin: ");
  scanf("%d", &payment);
  if (payment >=price){
  printf("you have purchased Coke, Enjoy!\n");
  change = payment - price;
    printf("Change: %d", change);
  } else {
    printf(" Insufficient funds");
  }
  break;

  case 3:
  price = 70;
  printf("insert coin: ");
  scanf("%d", &payment);
  if(payment >=price){
    printf("you have purchased royal, Enjoy!.\n");
    change = payment - price;
    printf("Change: %d", change);
  } else {
    printf(" Insufficient funds");
  }

  break;

  case 4:
  price = 80;
  printf("insert coin: ");
  scanf("%d", &payment);
  if (payment >=price){
  printf("you have purchased Coke, Enjoy!\n");
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
