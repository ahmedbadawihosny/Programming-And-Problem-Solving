#include <iostream>
#include <math.h>
using namespace std;

int main (){
  double x,y;
  cin>>x>>y;
  double result = x/y;
  cout<<"floor "<<x<<" / "<<y<<" = "<<floor(result)<<"\n"
  <<"ceil "<<x<<" / "<<y<<" = "<<ceil(result)<<"\n"
  <<"round "<<x<<" / "<<y<<" = "<<round(result)<<endl;

return 0;

}