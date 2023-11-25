#include <iostream>
using namespace std;

int main(){
  int x;
  cin>>x;
  int res = x / 1000;
  if(res % 2 == 0){
    cout<<"EVEN"<<endl;
  } else {

    cout<<"ODD"<<endl;
  }
}