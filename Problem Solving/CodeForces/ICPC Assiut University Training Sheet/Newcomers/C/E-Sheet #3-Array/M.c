#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n],max = -1e5,min = 1e5;
  for (int i = 0;i < n;i++){
  scanf("%d", &arr[i]);
  if (arr[i]  > max)
      max = arr[i];
  if (arr[i] < min) 
      min = arr[i];
  }

for (int i = 0;i < n;i++){
  if (arr[i] == max)
      printf("%d ",min);
    else if (arr[i] == min) 
      printf("%d ",max);
    else 
      printf("%d ",arr[i]);
  
  }

  return 0;
}