#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  long long a,b;
  cin>>a>>b;
  if (a-b > 0){
    cout<<a-b<<endl;
  } else {
    cout<<0<<endl;
  }
  return 0;
}