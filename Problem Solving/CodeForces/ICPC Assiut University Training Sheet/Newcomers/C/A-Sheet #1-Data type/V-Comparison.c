#include <stdio.h>

int main() {
  int a, b;
  char opr;
  scanf("%d %c %d", &a, &opr, &b);

  if ((opr == '<' && a < b) || (opr == '>' && a > b) || (opr == '=' && a == b)) {
      printf("Right\n");
  } else {
      printf("Wrong\n");
  }

  return 0;
}