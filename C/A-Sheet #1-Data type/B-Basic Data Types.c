#include <stdio.h>

int main(){
  int small_num;
  long long big_num;
  char character;
  float small_decimal;
  double big_decimal;
  
  scanf("%d %lld %c %f %lf", &small_num, &big_num, &character, &small_decimal, &big_decimal);
  
  printf("%d\n%lld\n%c\n%.2f\n%.1f",small_num, big_num,character,small_decimal, big_decimal);
  return 0;
}