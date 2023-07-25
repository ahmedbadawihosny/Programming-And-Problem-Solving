
#include <stdio.h>
//wrong
int main() {
  long long n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0;i < n;i++){
  scanf("%d", &arr[i]);
  if (arr[i] % 2 != 0){
      printf("0\n");
      return 0;
  }
  }
  long long x = 0;
  int flag=0;
  while (flag == 0){
  for (int i = 0;i < n;i++){
      if (arr[i] % 2 == 0){
          arr[i] = arr[i]/2;
      } else {
          flag = 1;
          break;
      }
  }
  x++;
  }
  printf("%lld\n",x-1);

  return 0;
}