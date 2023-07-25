#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--){
      int n;
      scanf("%d", &n);
      long long sum = 0,min = 1e9;
      int arr[n];
      for (int i = 0;i < n;i++) {
          scanf("%d", &arr[i]);
      }
      for (int i = 0;i < n;i++){
          for (int j = i+1;j < n;j++){
              sum = arr[i] + arr[j] + ((j+1)-(i+1));
              if (sum < min)
                  min = sum;
                  sum =0;
          }
      }
      printf("%lld\n",min);
  }

  return 0;
}