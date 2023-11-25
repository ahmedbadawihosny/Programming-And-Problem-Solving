  #include <stdio.h>

  int main() {
  int num;
  scanf("%d", &num);
  for (int i = 2;i <= num;i++){
      int y = 0;
      for (int x = 2 ;x < i;x++){
        if (i % x == 0)
            y = 1;
      }
        if (y == 0){
            printf("%d ",i);
        }
  }
  return 0;
  }
