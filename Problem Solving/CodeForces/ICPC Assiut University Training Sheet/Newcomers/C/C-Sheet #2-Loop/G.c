#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  long long fac =1 ;
  while(t--){
      int num;
      scanf("%d", &num);
      for(int i = 1 ; i <= num ; i++){
          fac *= i;
      }
      printf("%lld\n", fac);
      fac = 1;
  }
return 0;
}
