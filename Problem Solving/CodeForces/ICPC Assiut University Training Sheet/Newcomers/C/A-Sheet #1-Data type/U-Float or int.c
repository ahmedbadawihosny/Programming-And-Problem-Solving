#include <stdio.h>
#include<math.h>
int main(){

  float num,x,res;
  scanf("%f",&num);
  x = floor(num);
  if (num == x){
    printf("int %.f" , x);
  } else {
    res = num-x;
    printf("float %.f %.3f",x,res);
  }
  return 0;

}