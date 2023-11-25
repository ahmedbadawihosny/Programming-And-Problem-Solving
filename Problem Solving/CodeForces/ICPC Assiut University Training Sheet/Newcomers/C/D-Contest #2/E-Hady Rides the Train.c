#include <stdio.h>

int main() {
  long long n;
  scanf("%lld", &n);
  long long x= n /4,y;

  if (x % 2 == 0){
    y = n % 4;
  } else {
    y = 3 - (n%4);
  }
    printf("%lld %lld",x,y);

  return 0;
}