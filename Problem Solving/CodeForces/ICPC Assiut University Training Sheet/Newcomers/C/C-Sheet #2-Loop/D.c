#include <stdio.h>

int main() {
  int num;
  while(num != 0){
    scanf("%d", &num);
    if(num == 1999){
        printf("Correct\n");
        break;
    } else {
        printf("Wrong\n");
    }
  }

  return 0;
}
