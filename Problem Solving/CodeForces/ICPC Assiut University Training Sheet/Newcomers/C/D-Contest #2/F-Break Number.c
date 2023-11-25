#include <stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  int res=0;
  for (int i = 1;i <= t;i++){
  int count=0;
  long long num;
  scanf("%lld",&num);
  if (num % 2 != 0){
    count =0;
  } else {
    while(num > 0){
      if (num % 2 != 0){
        break;
      } else {
        count++;
        num/=2;
      }
    }
  }
  if (count > res){
      res = count;
  }
  }
  printf("%d\n",res);

  return 0; 
}