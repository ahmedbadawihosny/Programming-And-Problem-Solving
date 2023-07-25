#include <stdio.h>

int main() {
  int n,min=1e5,counter=0;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0;i < n;i++){
    scanf("%d",&arr[i]);
    if (arr[i] < min){
        min = arr[i];
    }
  }
    for (int i = 0;i < n;i++){
    if (arr[i] == min){
        counter++;
    }
  }
  if (counter % 2 == 0){
    printf("Unlucky\n");
  } else {
    printf("Lucky\n");
  }

  return 0;
}