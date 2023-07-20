#include <iostream>
using namespace std;

int main (){
    int num;
    cin>>num;
    int spaces = num-1;
    for (int i = 1;i <= num;i++){
      for (int x = 1 ;x <= spaces;x++){
        cout<<" ";
      } 
        for (int y = 1;y < i*2;y++){
        cout<<"*";
      }
        spaces--;
        cout<<endl;
    }

  return 0;
}
