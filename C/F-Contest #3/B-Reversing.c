#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++){
      scanf("%d", &arr[i]);
  }

  for (int i = 0; i < n; i++){ 
    if (arr[i] == 0){
        int j = 0, k = i - 1;
  
        while(j<k){
            int tmp = arr[j];
            arr[j] = arr[k];
            arr[k] = tmp;
            j++;
            k--;
        }

      }
  } for (int i = 0; i < n; i++){
      printf("%d ", arr[i]);
  }
  return 0;
}