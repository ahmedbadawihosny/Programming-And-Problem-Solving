#include <iostream>
using namespace std;

int main (){
    int num ;
    cin>>num;
    for (int i = 1;i <= num;i++){
      for (int x = num ;x >= i;x--){
        cout<<"*";
      }
        cout<<"\n";
    }

  return 0;
}
