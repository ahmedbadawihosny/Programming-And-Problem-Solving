#include <stdio.h>

int main() {
  int num,max = 0;
  scanf("%d",&num);

  for(int i = 1;i <= num;i++){
    int num;
    scanf("%d",&num);
    if(i == 1){
        max = num;
    }
    if(num > max ){
        max = num;
    }
  }
    printf("%d\n",max);

  return 0;
}
