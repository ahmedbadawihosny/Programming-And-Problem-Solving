#include <stdio.h>

int main() {
int n;
scanf("%d", &n);
int arr[n],arr2[n];
  for (int i=0; i<n; i++){
  int value;
  scanf("%d", &value);
  arr[i] = value;
  arr2[i] = value;
  }
  int x=0,count1=0,y=0,count2=1;
  arr2[0] *= -1;
  for (int i=0; i<n; i++){
    if (i == 0){
      x = arr[i];
      y = arr2[i];
    } else {
      if ((x > 0 && arr[i] > 0) || (x < 0 && arr[i] < 0)){
          arr[i] *= -1;
          count1++;
      }
      if ((y > 0 && arr2[i] > 0) || (y < 0 && arr2[i] < 0)){
          arr2[i] *= -1;
          count2++;
      }
        x = arr[i];
        y = arr2[i];
    }
  }
  if (count1 < count2){
  printf("%d\n", count1);
  } else {
  printf("%d\n", count2);
  }

  return 0;
}