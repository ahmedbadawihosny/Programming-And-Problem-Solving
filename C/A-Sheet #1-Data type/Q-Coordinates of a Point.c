#include <stdio.h>

int main(){
  double num1,num2;
  scanf("%lf %lf",&num1,&num2);
  
  if(num1 == 0 && num2 == 0){
    printf("Origem");
  } else if(num1 == 0 && num2 != 0){
    printf("Eixo Y");
  } else if(num1 != 0 && num2 == 0) {
    printf("Eixo X");
  } else if(num1 > 0 && num2 > 0){
    printf("Q1");
  } else if(num1 < 0 && num2 > 0){
    printf("Q2");
  } else if(num1 < 0 && num2 < 0){
    printf("Q3");
  } else {
    printf("Q4");
  }
}