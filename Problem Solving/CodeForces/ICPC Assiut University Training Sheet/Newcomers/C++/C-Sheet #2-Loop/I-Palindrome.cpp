#include <iostream>

using namespace std; 
int main()
{
  int x,y;
  int z = 0;
  cin>>x;
  y = x;
  while (x){
    z = z * 10 + x % 10;
    x = x / 10;
  }
  if (y == z){
  cout<<z<<endl<<"YES"<<endl;
  } else {
    cout<<z<<endl<<"NO"<<endl;
  } 
  return 0;
}