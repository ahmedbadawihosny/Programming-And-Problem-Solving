#include <stdio.h>

int main() {
  int num ;
  scanf("%d", &num);
  for (int i = 1;i <= num;i++){
    for (int x = num ;x >= i;x--){
      printf("*");
    }
      printf("\n");
  }

  return 0;
}
