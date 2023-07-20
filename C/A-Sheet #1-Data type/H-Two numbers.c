#include <stdio.h>
#include <math.h>

int main (){
  int x,y;
  double res;
  scanf("%d %d",&x,&y);
  res = (double)x/y;
  printf("floor %d / %d = %d\n",x,y,(int)floor(res));
  printf("ceil %d / %d = %d\n",x,y,(int)ceil(res));
  printf("round %d / %d = %d\n",x,y,(int)round(res));
return 0;

}