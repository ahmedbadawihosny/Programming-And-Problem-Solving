#include <stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  while (t--){
  long long l,r,mx,mn;
  scanf("%lld %lld",&l,&r);
  if (l>r){
    mx = l;
  } else {
    mx = r;
  }
    if (l<r){
    mn = l;
  } else {
    mn = r;
  }
  mn--;
  long long res1 = mn *(mn+1)/2;
  long long res2 = mx*(mx+1)/2;
  printf("%lld\n", res2-res1);
  }

  return 0; 
}