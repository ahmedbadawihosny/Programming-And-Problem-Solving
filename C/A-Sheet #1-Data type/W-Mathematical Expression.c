#include <stdio.h>

int main() {
  int x,y,z,res;
  char opr,opr2;
  scanf("%d %c %d %c %d",&x,&opr,&y,&opr2,&z);

  if (opr=='+') {
      res = x + y;
  } else if (opr=='-') {
      res = x - y;
  } else if (opr=='*') {
      res = x * y;
  }

  if (res==z && opr2=='=') {
      printf("Yes");
  } else {
      printf("%d",res);
  }

  return 0;
}
