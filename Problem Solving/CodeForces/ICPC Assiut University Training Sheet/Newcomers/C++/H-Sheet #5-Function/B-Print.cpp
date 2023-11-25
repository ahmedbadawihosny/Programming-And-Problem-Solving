#include <iostream>
#include <vector>

using namespace std;
int num(int& x){
  return x;
}

int main(){
	int x;
	cin>>x;
    for (int i = 1;i < x;i++){
      cout<<i<<" ";
	}
      cout<<x;

  return 0;
} 