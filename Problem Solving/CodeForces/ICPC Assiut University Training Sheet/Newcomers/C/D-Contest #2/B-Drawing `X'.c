#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  for (int i = 0;i < n;i++){
    for (int j = 0;j < n;j++){
      if (i == j && i != n/2 && j != n/2){
        printf("\\");
      } else if (i == n/2 && j == n/2){
        printf("X");
      } else if (j != n/2 && i == ((n-1)-j)){
        printf("/");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }

  return 0;
}