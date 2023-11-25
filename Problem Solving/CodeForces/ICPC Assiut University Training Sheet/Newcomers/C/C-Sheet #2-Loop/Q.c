#include<stdio.h>

int main(){
  long long t,n;
  scanf("%lld",&t);
  for(long long i=1;i<=t;i++){
    scanf("%lld",&n);
    if (n==0){
        printf("0");
    }
    else{
    while (n>0){
        long long first=0;
        first =(n%10);
        n/=10;
        printf("%lld ",first);
    }
    }
    printf("\n");
  }

  return 0;
}
