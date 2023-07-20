#include <iostream>
using namespace std;

int main (){
  int num;
  cin>>num;
  for (int i = 1;i <= num; i++){
    for (int x = 1;x <= i;x++){
        cout<<"*";
    }
        cout<<endl;
  }

  return 0;
}