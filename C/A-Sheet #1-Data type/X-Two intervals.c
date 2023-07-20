#include <stdio.h>

int main() {
  int l1, r1, l2, r2,x,y;

  scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

  x = (l1 > l2) ? l1 : l2;
  y = (r1 < r2) ? r1 : r2;

  if (x <= y) {
      printf("%d %d\n", x, y);
  } else {
      printf("-1\n");
  }

  return 0;
}