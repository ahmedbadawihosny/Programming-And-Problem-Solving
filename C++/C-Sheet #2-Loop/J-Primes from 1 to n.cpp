#include <iostream>
using namespace std;

int main (){
  int num;
  cin>>num;
  for (int i = 2;i <= num;i++){
      bool y = 0;
      for (int x = 2 ;x < i;x++){
        if (i % x == 0)
            y = 1;
      }
        if (y == 0){
            cout<<i<<" ";
        }
  }
  
  return 0;
}