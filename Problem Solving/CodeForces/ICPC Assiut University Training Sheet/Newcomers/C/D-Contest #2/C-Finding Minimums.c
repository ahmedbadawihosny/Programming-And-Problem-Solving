#include <stdio.h>

int main() {
  int n,k;
  scanf("%d %d",&n,&k);
  int min,flag = 1,count=0;
  for (int i =1;i<=n;i++){
    int x;
    scanf("%d",&x);
    if (flag == 1){
      min = x;
      flag= 0;
    } else {
      if (x < min){
        min = x;
      }
    }
    count++;
    if (count == k || i == n){
      printf("%d ",min);
      count = 0;
      flag = 1;
    }
  }
  return 0;
}
