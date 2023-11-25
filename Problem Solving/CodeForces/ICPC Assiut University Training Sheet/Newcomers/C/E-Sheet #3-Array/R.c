#include <stdio.h>

void sort(int *a, int n){
  for(int i = 0; i < n-1; i++){
      for(int j = i+1; j < n; j++){
          if(a[i] > a[j]){
              int t = a[i];
              a[i] = a[j];
              a[j] = t;
          }
      }
  }
}

int main(){
  int n;
  scanf("%d", &n);
  int a[n], b[n];
  for(int i = 0; i < n; i++)
      scanf("%d", &a[i]);
  for(int i = 0; i < n; i++)
      scanf("%d", &b[i]);

  sort(a, n);
  sort(b, n);
  for(int i = 0; i < n; i++){
      if(a[i] != b[i]){
          printf("no\n");
          return 0;
      }
  }
  printf("yes\n");
  return 0;
}