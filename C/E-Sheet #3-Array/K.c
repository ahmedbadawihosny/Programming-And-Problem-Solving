#include <stdio.h>

int main() {
  int n,sum=0;
  char s[n+1] ;
  scanf("%d %s",&n,&s);
  for (int i = 0;i < n;i++){
    sum+=s[i] - '0';
  }
  printf("%d\n",sum);

  return 0;
}