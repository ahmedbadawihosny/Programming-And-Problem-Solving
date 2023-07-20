#include <stdio.h>

int main(){
  char character;
  scanf("%c",&character);

    if(character>= 97 && character<= 122){
    printf("ALPHA\n");
    printf("IS SMALL\n");
  }else if(character>= 65 && character<= 90){
    printf("ALPHA\n");
    printf("IS CAPITAL\n");
  } else {
    printf("IS DIGIT\n");
  }

  return 0;
}