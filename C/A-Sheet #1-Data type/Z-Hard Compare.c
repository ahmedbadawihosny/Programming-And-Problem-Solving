#include <stdio.h>
#include <math.h>

int main (){
  double num1,num2,num3,num4;
  scanf("%lf %lf %lf %lf",&num1,&num2,&num3,&num4);

  if((num2*log(num1)) > (num4*log(num3))){
    
    printf("YES");
  } else {
    printf("NO");
  }
}