#include <stdio.h>

int main() {
  int counter;
  scanf("%d", &counter);
  while (counter--) {
    int num1,num2,sum=0;
    scanf("%d %d", &num1, &num2);
    int min,max;
    if (num1 >= num2){
      max = num1;
      min = num2;
    } else {
      max = num2;
      min = num1;
    }
    for (int i = min + 1;i <= max - 1;i++){
          if (i % 2 != 0){
            sum+=i;
          }
    }
    printf("%d\n",sum);
  }

  return 0;
}
