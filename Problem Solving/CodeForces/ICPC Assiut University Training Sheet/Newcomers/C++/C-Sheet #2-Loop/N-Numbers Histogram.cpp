#include <iostream>
using namespace std;

int main (){
  char opr;
  cin>>opr;
  int lines;
  cin>>lines;
  for (int i = 1 ; i <= lines ;i++){
      int x;
      cin>>x;
      while (x--){
        cout<<opr;
      }
        cout<<"\n";
  }

  return 0;

}