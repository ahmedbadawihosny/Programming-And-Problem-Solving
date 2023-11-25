#include <stdio.h>

int main(){
  double num;
  scanf("%lf",&num);

  if(num >=0 && num <= 25){
    printf("Interval [0,25]");
  } else if(num > 25 && num <= 50){
    printf("Interval (25,50]");
  } else if(num > 50 && num <=75){
    printf("Interval (50,75]");
  } else if(num > 75 && num <= 100 ){
    printf("Interval (75,100]");
  } else {
    printf("Out of Intervals");
  }

}