#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n,counter=0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0;i < n;i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0;i < n;i++){
        for (int j = i;j < n;j++){
          if (arr[j] >= arr[j-1])
          counter++;
          else 
          break;
        }
    }
    printf("%d\n",counter+n);
  }

  return 0;
}