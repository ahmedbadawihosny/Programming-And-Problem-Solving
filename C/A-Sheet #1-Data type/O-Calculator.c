#include <stdio.h>

int main(){
  int num1,num2;
  char opr;
  scanf("%d %c %d",&num1,&opr,&num2);

switch (opr){
  case '+':
  printf("%d",num1+num2);
  break;
  case '-':
  printf("%d",num1-num2);
  break;
  case '*':
  printf("%d",num1*num2);
  break;
  case '/':
  printf("%d",num1/num2);
  default:
  break;
}

  return 0;
}