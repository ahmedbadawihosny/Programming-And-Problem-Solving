#include <stdio.h>

int main() {
  int n,x;
  int flag = 0;
  scanf("%d",&n);
  long long arr[n];
  for (int i = 0;i < n;i++){
      scanf("%lld",&arr[i]);
  } 
  scanf("%d",&x);
  for (int i = 0;i < n;i++){
      if (x == arr[i]){
          printf("%d\n",i);
          flag = 1;
          break;
      } 
  }
  if (flag == 0){
      printf("-1\n");
  }
  
  return 0;
}