#include <stdio.h>

int main(){
  int A, B;
  scanf("%d %d", &A, &B);
  char code[A+B+1];
  scanf("%s", code);
  
  if (code[A] != '-'){
      printf("No");
  }
  else{
      for (int i = 0; i < A+B+1; i++){
          if (i == A){
              continue;
          }
          else if (code[i] < '0' || code[i] > '9'){
              printf("No");
              return 0;
          }
      }
      printf("Yes");
  }
  return 0;
}