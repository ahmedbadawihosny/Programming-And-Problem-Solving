#include <stdio.h>
#include <limits.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int x=INT_MAX;
  for (int i = 1;i < n;i++){
    scanf("%d", &arr[i]);
    if (x < arr[i]){
      x = x;
    } else {
      x = arr[i];
    }
  } 
  for (int i = 1;i < n;i++){
    if (arr[i] == x){
        printf("%d %d\n",arr[i],i);
        break;
    }
  }

  return 0;
}