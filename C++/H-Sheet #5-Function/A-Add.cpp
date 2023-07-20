#include <iostream>
#include <vector>

using namespace std;
int sum(int x,int y){
  int total = x + y;
  return total;
}

int main(){
    int x,y;
	cin>>x>>y;
    cout<<sum(x,y)<<endl;

return 0;
} 