#include <stdio.h>

int main()
{
  int n1,m1;
  scanf("%d %d", &n1,&m1);
  char arr[101][101];

  for (int i = 1; i <= n1; i++) {
      for (int z = 1; z <= m1; z++) {
          scanf(" %c", &arr[i][z]);
      }
  }

  int n2, m2;
  scanf("%d %d", &n2, &m2);

  if (arr[n2][m2 - 1] != '.' &&
      arr[n2][m2 + 1] != '.' &&
      arr[n2 - 1][m2] != '.' &&
      arr[n2 + 1][m2] != '.' &&
      arr[n2 - 1][m2 - 1] != '.' &&
      arr[n2 - 1][m2 + 1] != '.' &&
      arr[n2 + 1][m2 - 1] != '.' &&
      arr[n2 + 1][m2 + 1] != '.') {
      printf("yes");
  } else {
      printf("no");
  }

  return 0;
}
