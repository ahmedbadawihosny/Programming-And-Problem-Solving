#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  int counter = 1;
  for (int i = 1;i <= num;i++){
      if (counter % 4 == 0){
        counter++;
        printf("PUM\n");
        i--;
        continue;
      }
      printf("%d ",counter);
      counter++;
      printf("%d ",counter);
      counter++;
      printf("%d ",counter);
      counter++;
    }
      printf("PUM\n");

  return 0;
}
