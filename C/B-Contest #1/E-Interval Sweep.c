#include <stdio.h>

int main() {
  int a,b;
  scanf("%d %d",&a,&b);
  if ((a == 0 || b == 0) || abs(a - b) >= 2){
    printf("NO");
  } else {
    printf("YES");
  }

  return 0;
}