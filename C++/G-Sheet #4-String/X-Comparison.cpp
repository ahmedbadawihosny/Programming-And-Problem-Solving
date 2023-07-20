#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s,sub1= "",sub2;
    cin>>s;
    string value = s;
    string value2 = s;
    for (int i=0;i < s.length()-1;i++){
        sub1 += s[i];
        value.erase(0,1);
        sub2 = value;
        sort(sub1.begin(),sub1.end());
        sort(sub2.begin(),sub2.end());
        value2 = min(value2,sub1+sub2);
    }
    cout<<value2<<endl;
    return 0;
}