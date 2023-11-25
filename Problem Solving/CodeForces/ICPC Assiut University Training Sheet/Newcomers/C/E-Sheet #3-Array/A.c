#include <stdio.h>
#include <math.h>

int main() {
  long long x,sum = 0;
  scanf("%lld", &x);
  for(long long i = 1;i <= x;i++){
    long long arr[x];
    scanf("%lld", &arr[x]);
    sum+=arr[x];
  }

  if(sum<0){
        printf("%lld",(-1)*sum);
    }
    else{
        printf("%lld",sum);
    }
  return 0;
}