#include <stdio.h>

int main(){
  int num1,num2,num3,max,min,x;
  scanf("%d %d %d",&num1,&num2,&num3);

  if (num1 >= num2 && num1>= num3 ){
        max = num1;
    if(num2 >= num3){
        x = num2;
        min =  num3;
    } else {
      x = num3;
      min = num2;
    }
  } else if(num2 >= num1 && num2 >= num3){
          max = num2;
            if(num1 >= num3){
        x = num1;
        min =  num3;
    } else {
      x = num3;
      min = num1;
    }
  } else {
          max =num3;
            if(num1 >= num2){
        x = num1;
        min =  num2;
    } else {
      x = num2;
      min = num1;
    }
  }

  printf("%d\n%d\n%d\n\n",min,x,max);
  printf("%d\n%d\n%d",num1,num2,num3);

  return 0;
}