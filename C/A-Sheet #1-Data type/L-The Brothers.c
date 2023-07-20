#include <stdio.h>
#include <string.h>

int main(){
  char name1[1024],name2[1024];
  char name3[1024],name4[1024];
  scanf("%s %s",&name1,&name2);
  scanf("%s %s",&name3,&name4);

  if (strcmp(name2,name4) == 0){
    printf("ARE Brothers");
  } else {
    printf("NOT");
  }
  return 0;
}