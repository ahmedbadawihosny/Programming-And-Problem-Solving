#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a,x=0;
  cin>>a;
  x = a %10;
  a /= 10;
  if (x % a ==0){
    cout<<"YES";
  } else if (a % x == 0){
    cout<<"YES";
  } else {
    cout<<"NO";
  }
    return 0;
}