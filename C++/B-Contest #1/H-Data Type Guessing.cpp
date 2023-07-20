#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  double n,k,a,div=0;
  cin>>n>>k>>a;
  div = (n*k)/a;
  long long myRes = div;
  double res = div - myRes;
  if (res > 0){
    cout<<"double";
  } else if (myRes <= 2147483647){
    cout<<"int";
  } else {
    cout<<"long long";
  }
    return 0;
}