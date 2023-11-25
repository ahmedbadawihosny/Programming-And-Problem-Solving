#include <iostream>
using namespace std;

int main(){
  char character;
  cin>>character;
  int x = character;

  if(x >= 97 && x <= 122){
    x = x - 32;
    cout<<char(x)<<endl;
  }else {
    x = x + 32;
    cout<<char(x)<<endl; 
    }

  return 0;
}