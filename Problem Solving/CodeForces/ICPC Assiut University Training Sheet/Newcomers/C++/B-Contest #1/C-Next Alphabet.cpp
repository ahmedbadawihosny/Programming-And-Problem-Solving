#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  char x;
  cin>>x;
  int letter = x;
  if (x == 122){
    cout<<'a'<<endl;   
  } else {
  ++x;
  cout<<x<<endl;
  }

  return 0;
}