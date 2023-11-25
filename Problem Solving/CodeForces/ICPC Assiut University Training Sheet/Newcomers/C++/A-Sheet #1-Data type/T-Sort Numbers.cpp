#include <iostream>
using namespace std;

int main(){
  int num1,num2,num3,max,min,x;
  cin>>num1>>num2>>num3;

  if (num1 >= num2 && num1>= num3 ){
        max = num1;
    if(num2 >= num3){
        x = num2;
        min =  num3;
    } else {
      x = num3;
      min = num2;
    }
  } else if(num2 >= num1 && num2 >= num3){
          max = num2;
            if(num1 >= num3){
        x = num1;
        min =  num3;
    } else {
      x = num3;
      min = num1;
    }
  } else {
          max =num3;
            if(num1 >= num2){
        x = num1;
        min =  num2;
    } else {
      x = num2;
      min = num1;
    }
  }

  cout<<min<<"\n"<<x<<"\n"<<max<<"\n\n";
  cout<<num1<<"\n"<<num2<<"\n"<<num3;
return 0;
}