#include <iostream>
using namespace std;

int main (){
  int num,max = 0;
  cin>>num;

  for(int i = 1;i <= num;i++){
    int num;
    cin>>num;
    if(i == 1){
        max = num;
    }
    if(num > max ){
        max = num;
    }
  }
      cout<<max<<"\n";
return 0;
}