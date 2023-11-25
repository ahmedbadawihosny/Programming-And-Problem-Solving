#include <iostream>
using namespace std;
int main (){

  int a,b,c,d,res;
  cin>>a>>b>>c>>d;

  res = ((a % 100)*(b % 100)*(c % 100)*(d % 100));

  if(res % 100 <= 9){
    cout<<"0"<<res % 100<<endl;
  } else {
    cout<<res % 100<<endl;
  }

  return 0;

}
