#include <iostream>
#include <math.h>
using namespace std;
int main (){

  double num1,num2,num3,num4;
  cin>>num1>>num2>>num3>>num4;

  if((num2*log(num1)) > (num4*log(num3))){
    
    cout<<"YES"<<endl;
  } else {
    cout<<"NO"<<endl;
  }

return 0;
}