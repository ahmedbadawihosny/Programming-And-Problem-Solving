#include <stdio.h>

int main() {
  int counter;
  scanf("%d", &counter);
  if(counter == 1){
    printf("-1");
    return 0;
  }
  for(int i = 1 ; i <=counter ; i++){
    if(i % 2 == 0){
        printf("%d\n",i);
    }
  }

  return 0;
}
