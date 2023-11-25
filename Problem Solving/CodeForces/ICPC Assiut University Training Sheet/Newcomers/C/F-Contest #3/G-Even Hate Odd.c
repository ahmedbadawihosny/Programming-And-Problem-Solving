#include <stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  while (t--){
    int n;
    scanf("%d",&n);
    int even=0,odd=0;
    for (int i =0;i < n;i++){
      int x;
      scanf("%d",&x);
      if (x % 2 == 0){
        even++;
      } else {
        odd++;
      }
    }
    if (even == odd){
      printf(0);
    } else if (n % 2 != 0){
      printf(-1);
    } else {
      printf("%d\n",abs(even-odd)/2);
    }
  }
  return 0;
}
