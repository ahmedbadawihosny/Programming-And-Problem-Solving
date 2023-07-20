#include <iostream>
using namespace std;

int main(){
  double num,x;
  cin>>num;
  int numInt = num;
  x = num - numInt;
  if(x != 0){
    cout<<"float "<<numInt<<" "<<x<<endl;
  } else {
    cout<<"int "<<numInt<<endl;
  }

  return 0;
}