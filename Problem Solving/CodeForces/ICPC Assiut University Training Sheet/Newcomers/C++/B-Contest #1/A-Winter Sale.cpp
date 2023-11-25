#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  double a,b;
  cin>>a>>b;
  double pre = 100 - a;
  double priceResult = b/pre;
  double result = (a*priceResult) + b;
  cout<<result<<endl;
  
    return 0;
}