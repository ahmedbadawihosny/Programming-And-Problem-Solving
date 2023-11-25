#include <stdio.h>
#include <math.h>

int main(){
  int x;
  scanf("%d",&x);
  int res = x / 1000;
  if(res % 2 == 0){
    printf("EVEN");
  } else {

    printf("ODD");
  }
  return 0;
}