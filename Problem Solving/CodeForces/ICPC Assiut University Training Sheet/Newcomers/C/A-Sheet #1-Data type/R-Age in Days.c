#include <stdio.h>

int main(){
  int inputdays ;
  scanf("%d",&inputdays);

  int year = inputdays / 365;
  inputdays -= 365 * year;
  int months = inputdays / 30;
  inputdays -= 30 * months;

  printf("%d years\n",year);
  printf("%d months\n",months);
  printf("%d days\n",inputdays);
}