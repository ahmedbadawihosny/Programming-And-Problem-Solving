#include <iostream>
using namespace std;

int main (){
  int x;
  cin>>x;
  for (int i=1;i <= x;i++){
      string num;
      cin>>num;
      int size = num.size();
      for (int x = size-1;x >= 0;x--){
          cout<<num[x]<<" ";
      }
      cout<<endl;
}

  return 0;
}