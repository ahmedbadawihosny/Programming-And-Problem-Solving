#include <stdio.h>

int main() {
  double n,k,a,div=0;
  scanf("%lf %lf %lf",&n,&k,&a);
  div = (n*k)/a;
  long long myRes = div;
  double res = div - myRes;
  if (res > 0){
    printf("double");
  } else if (myRes <= 2147483647){
    printf("int");
  } else {
    printf("long long");
  }

  return 0;
}