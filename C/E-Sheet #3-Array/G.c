
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  int flag = 1;
  for (int i = 0;i < n;i++){
    scanf("%d", &arr[i]);
  } 
    for (int i = 0;i <= n/2;i++){
    if (arr[i] != arr[n-i-1]){
        flag = 0;
    }
  }
  if (flag == 1){
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}