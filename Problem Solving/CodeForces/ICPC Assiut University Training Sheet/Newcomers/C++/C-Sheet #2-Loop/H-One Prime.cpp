#include <iostream>
using namespace std;

int main (){
  int num,res,flag=0;
  cin>>num;
  res = num/2 ;
  
  for (int i = 2 ; i <= res; i++){
      if(num % i == 0){
        cout<<"NO"<<endl;
        flag=1;
        break;
      }

    }
    if(flag == 0){
          cout<<"YES"<<endl;
    }

return 0;
}