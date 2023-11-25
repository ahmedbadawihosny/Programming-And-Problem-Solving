#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0;i < n;i++){
      scanf("%d",&arr[i]);
  }
  for (int i = 0;i < n;i++){
      if (arr[i] > 0){
          printf("1 ");
      } else if (arr[i] < 0){
          printf("2 ");
      } else {
          printf("0 ");
      }
  }

  return 0;
}