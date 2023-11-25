#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a,b;
  cin>>a>>b;
  if ((a == 0 || b == 0) || abs(a - b) >= 2){
    cout<<"NO";
  } else {
    cout<<"YES";
  }

  
    return 0;
}