#include <iostream>
using namespace std;

int main(){
    char Char;
    cin>>Char;
    if(Char>= 97 && Char<= 122){
      cout<<"ALPHA"<<endl;
      cout<<"IS SMALL"<<endl;
    }else if(Char>= 65 && Char<= 90){
      cout<<"ALPHA"<<endl;
      cout<<"IS CAPITAL"<<endl;
    } else {
      cout<<"IS DIGIT"<<endl;
    }

  return 0;
}