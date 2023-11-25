#include <iostream>
using namespace std;

int main (){
  int num;
  while(true){
    cin>>num;
    if(num == 1999){
        cout<<"Correct"<<endl;
        break;
    } else {
        cout<<"Wrong"<<endl;
    }
  }
return 0;
}