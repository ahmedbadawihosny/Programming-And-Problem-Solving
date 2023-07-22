#include <stdio.h>

int main() {
  int size;
  scanf("%d", &size);
  int start = 0,second = 1;
  if (size == 1){
    printf("%d\n",start);
} else if (size == 2) {
    printf("%d %d\n",start,second);
} else {
    printf("%d %d ",start,second);
    for (int i = 2;i < size;i++){
        int res = start + second;
        printf("%d ",res);
        start = second;
        second = res;
    }
}

  return 0;
}
