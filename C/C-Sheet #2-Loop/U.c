#include <stdio.h>

int main() {
int num,x,y;
scanf("%d %d %d",&num,&x,&y);
long long sum1 = 0;
for (int i=1;i<=num;i++){
    if(i / 10 == 0){
        if (i >= x && i <= y){
            sum1 +=i;
        }
    } else {
        int num2 = i;
        int sum2 = 0;
        while (num2){
            int digit = num2 % 10;
            sum2 += digit;
            num2 /= 10;
        }
        if (sum2 >= x && sum2 <= y){
            sum1 += i;
        }
    }
}
  printf("%lld\n",sum1);

  return 0;
}
