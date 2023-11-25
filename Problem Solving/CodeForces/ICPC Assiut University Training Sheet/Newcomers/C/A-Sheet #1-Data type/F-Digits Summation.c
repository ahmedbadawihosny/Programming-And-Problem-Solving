#include <stdio.h>

int main(){
  long long int n,m,res;
  scanf("%lld %lld",&n,&m);

  res = (n%10) + (m%10);
  printf("%lld",res);
  return 0;
}