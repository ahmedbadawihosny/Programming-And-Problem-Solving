#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n][n];
  long long main=0,secondary=0;
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      scanf("%d", &arr[i][j]);
      if (i == j)
      main += arr[i][j];
      if ((i+j) == n-1)
      secondary += arr[i][j];
  }
}

if (main - secondary < 0){
printf("%lld\n",-1* (main - secondary));
  } else {
    printf("%lld\n",(main - secondary));
  }

  return 0;
}