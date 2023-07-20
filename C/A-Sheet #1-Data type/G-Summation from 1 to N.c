#include <stdio.h>

int main(){
  long long n,res1,res2;
  scanf("%lld",&n);

  res1 = (n/2)*(n+1);
  res2 = ((n+1)/2)*n;

  if (n%2==0) {
    printf("%lld",res1);
    } else {
    printf("%lld",res2);
    }
  return 0;
}