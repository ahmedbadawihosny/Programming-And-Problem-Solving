#include <stdio.h>

int main() {
  char opr;
  scanf("%c", &opr);
  int lines;
  scanf("%d", &lines);
  for (int i = 1 ; i <= lines ;i++){
      int x;
      scanf("%d", &x);
      while (x--){
        printf("%c", opr);
      }
        printf("\n");
  }

  return 0;
}
