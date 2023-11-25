#include <iostream>
#include <math.h>
using namespace std;

int main (){
int numberTest;
cin>>numberTest;
long long num;
for (int i=0;i < numberTest;i++){
    cin>>num;
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
    cout<<sum<<endl;
}

  return 0;
}