#include <stdio.h>

int main() {
  double a,b;
  scanf("%lf %lf",&a,&b);
  
  double pre = 100 - a;
  double priceResult = b/pre;
  double result = (a*priceResult) + b;
  printf("%.2f",result);

  return 0;
}