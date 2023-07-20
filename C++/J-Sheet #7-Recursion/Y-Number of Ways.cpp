#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
using namespace std;

ii num1,num2;
ii rc(ii n){
    if (n >= num2){
        return n == num2;
    }
    return rc(n + 1) + rc(n + 2) + rc(n + 3);
}

int main(){
  Code_acceleration
  cin>>num1>>num2;
  cout<<rc(num1);
}