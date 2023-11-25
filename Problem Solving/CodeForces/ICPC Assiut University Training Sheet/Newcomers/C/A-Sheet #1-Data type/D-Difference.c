#include <stdio.h>

int main(){
  long long a,b,c,d,res;
  
  scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
  res = ((a*b) - (c*d));
  printf("Difference = %lld" , res);
  return 0;
}