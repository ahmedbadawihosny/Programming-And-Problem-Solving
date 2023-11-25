#include <stdio.h>

int main() {
  int n,m;
  long long x;
  int flag=0; 
  scanf("%d%d",&n,&m);
  int arr[n][m];
  for (int i = 0;i < n;i++){
      for (int j = 0;j < m;j++){
          scanf("%d",&arr[i][j]);
      }
  }
  scanf("%lld",&x);
  for (int i = 0;i < n;i++){
      for (int j = 0;j < m;j++){
          if (arr[i][j] == x){
              flag = 1;
              break;
          } 
      }
  }
  if (flag == 0){
    printf("will take number\n");
  } else {
    printf("will not take number\n");
  }

  return 0;
}