#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long long fib[55];
  fib[1]=0;
  fib[2]=1;
  for (int i = 3;i <= n;i++){
  fib[i]=fib[i-1] + fib[i-2];
  }
  printf("%lld", fib[n]);

  return 0;
}