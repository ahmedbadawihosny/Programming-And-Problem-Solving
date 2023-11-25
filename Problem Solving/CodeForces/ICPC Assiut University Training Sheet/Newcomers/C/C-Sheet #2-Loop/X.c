#include <stdio.h>

int main() {
int numberTest;
scanf("%d", &numberTest);
long long num;
for (int i=0;i < numberTest;i++){
    scanf("%lld", &num);
    int ones = 0;
    while (num > 0){
        if (num % 2 == 1){
            ones++;
        }
        num /=2;
    }
    long long sum = 0;
    for (int x = 0 ;x < ones;x++){
        sum+= 1 * pow(2,x);
    }
    printf("%lld\n",sum);
}

  return 0;
}
