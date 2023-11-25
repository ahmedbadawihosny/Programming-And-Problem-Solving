#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin>>n;
  long long x= n /4;
  long long y;
  if (x % 2 == 0){
    y = n % 4;
  } else {
    y = 3 - (n%4);
  }
    cout<<x<<" "<<y<<endl;

  return 0;
}