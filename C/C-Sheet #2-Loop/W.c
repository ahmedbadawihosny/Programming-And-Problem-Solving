#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  int spaces = num-1;
  for (int i = 1;i <= num;i++){
    for (int x = 1 ;x <= spaces;x++){
      printf(" ");
    }
    for (int y = 1;y < i*2;y++){
      printf("*");
    }
      printf("\n");
      spaces--;
  }
  spaces = 1;

      for (int i = num;i >= 1;i--){
      for (int x = 1;x < spaces;x++){
        printf(" ");
      }
      for (int y = i * 2;y > 1;y--){
          printf("*");
      }
      printf("\n");
      spaces++;
      }

  return 0;
}
