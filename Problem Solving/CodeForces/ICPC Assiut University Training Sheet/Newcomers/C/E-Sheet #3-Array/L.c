#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0;i < n;i++)
      scanf("%d",&arr[i]);

    for (int j = 0;j < n;j++){
        for (int k = j;k < n;k++){
            int max = -1e5;
            for (int i = j;i <= k;i++){
                if (arr[i] > max)
                    max = arr[i];
            }
            printf("%d ",max);
        }
    }
    printf("\n");
  }

  return 0;
}