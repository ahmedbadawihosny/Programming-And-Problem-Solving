#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    cin>>s;
    string x="hello";
    int i=0,z=0;
    while (true){
        if (i == s.size() || z == x.size()){
          break;
        }
        if (s[i] == x[z]){
            z++;
        }
        i++;
    }
    if (z == 5){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}