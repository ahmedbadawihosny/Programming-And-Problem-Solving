#include <stdio.h>

int main() {
  int num,res,flag=0;
  scanf("%d",&num);
  res = num/2 ;
  
  for (int i = 2 ; i <= res; i++){
      if(num % i == 0){
        printf("NO\n");
        flag=1;
        break;
      }

    }
    if(flag == 0){
          printf("YES\n");
    }

  return 0;
}
