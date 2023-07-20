#include <iostream>
using namespace std;

int main (){
    int t;
    cin>>t;
    long long fac =1 ;
    while(t--){
        int num;
        cin>>num;
        for(int i = 1 ; i <= num ; i++){
            fac *= i;
        }
        cout<<fac<<endl;
        fac = 1;
    }

return 0;
}