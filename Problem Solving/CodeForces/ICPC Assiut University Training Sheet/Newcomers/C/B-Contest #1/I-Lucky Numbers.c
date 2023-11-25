#include <stdio.h>

int main() {
  int a,x=0;
  scanf("%d",&a);
  x = a %10;
  a /= 10;
  if (x % a ==0){
    printf("YES");
  } else if (a % x == 0){
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}