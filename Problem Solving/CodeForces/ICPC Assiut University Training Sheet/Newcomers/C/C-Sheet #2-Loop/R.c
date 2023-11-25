#include <stdio.h>

int main() {
    int num1,num2;
    while(scanf("%d %d",&num1,&num2)){
    long long sum =0;
    int min =0,max=0;
    if(num1 <= 0 || num2 <= 0){
    return 0;
    }
    if(num1 >= num2){
    max = num1;
    min = num2;
    } else {
    max = num2;
    min = num1;
    }
    for(int i = min;i <= max;i++){
    printf("%d ",i);
    sum+=i;
    }
    printf("sum =%lld\n",sum);
  }

  return 0;
}}
