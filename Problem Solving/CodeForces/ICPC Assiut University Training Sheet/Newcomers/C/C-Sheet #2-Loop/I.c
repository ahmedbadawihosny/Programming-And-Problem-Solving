#include <stdio.h>

int main() {
  int x,y;
  int z = 0;
  scanf("%d",&x);
  y = x;
  while (x){
    z = z * 10 + x % 10;
    x = x / 10;
  }
  if (y == z){
  printf("%d\n YES\n",z);
  } else {
    printf("%d\n NO\n",z);
  } 

  return 0;
}
