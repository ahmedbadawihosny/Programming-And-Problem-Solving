#include <stdio.h>

int main() {
  int n,m,counter=0;
  scanf("%d%d",&n,&m);
  int a[n],j=0;
  for (int i = 0;i < n;i++)
    scanf("%d",&a[i]);

for (int i = 0;i < m;i++){
    int x;
    scanf("%d",&x);
  for ( ;j < n;j++)
      if (x == a[j])
  {
      counter++;
      j++;
      break;
  }
}

    if (counter == m) 
      printf("YES\n");
    else 
      printf("NO\n");

  return 0;
}