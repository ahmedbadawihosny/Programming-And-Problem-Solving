#include <stdio.h>

int main() {
  int a,b;
  int counter = -1;
  scanf("%d %d",&a,&b);
  for (int i = a;i <= b;i++ ){
      int x = 0;
      int j = i;
      while (j){
          if (j % 10 != 4 && j % 10 != 7)
              x++;
              j = j / 10;
      }
      if (x == 0){
          printf("%d ",i);
          counter++;
      }
  }
    if (counter == -1){
      printf("-1\n");
    }

return 0;
}
