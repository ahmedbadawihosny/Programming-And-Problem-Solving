#include <stdio.h>

int main(){
  char name[1024] = "";
  scanf("%s", &name);
  printf("Hello, %s" , name);

  return 0;
}