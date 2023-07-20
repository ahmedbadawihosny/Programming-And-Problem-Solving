#include <stdio.h>

int main (){
  long long a,b,c,d,res;
  scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

  res = ((a % 100)*(b % 100)*(c % 100)*(d % 100));

  if(res % 100 <= 9){
    printf("0%lld",res%100);
  } else {
    printf("%lld",res%100);
  }

  return 0;
}
