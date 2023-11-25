#include <iostream>
#include <iomanip>
using namespace std;

int swapnum();
int main() {
	swapnum();
    return 0;
}

int swapnum() {
  int x,y;
  cin>>x>>y;
  x = x + y;
  y = x - y;
    x = x - y;
  cout<<x<<" "<<y<<endl;

}