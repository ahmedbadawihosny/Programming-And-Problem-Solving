#include <stdio.h>

int main(){
  int n, k;
  scanf("%d %d", &n, &k);
  long long int ar[n];
  for (int i = 0; i < n; i++){
      scanf("%lld", &ar[i]);
  }

  for (int i = 0; i < n - 1; i++){
    for (int j = i + 1; j < n; j++){
      if (ar[i] < ar[j]){
          long long int tmp = ar[i];
          ar[i] = ar[j];
          ar[j] = tmp;
      }
    }
  }

  long long int sum = 0;
  for (int i = 0; i < k; i++){
    if (ar[i] > 0){
        sum += ar[i];
    }
  }

  printf("%lld\n", sum);

  return 0;
}