#include <iostream>
using namespace std;

int main(){
    int a,b;
    int counter = -1;
    cin>>a>>b;
    for (int i = a;i <= b;i++ ){
        int x = 0;
        int j = i;
        while (j){
            if (j % 10 != 4 && j % 10 != 7)
                x++;
                j = j / 10;
        }
        if (x == 0){
                cout<<i<<" ";
                counter++;
        }
    }
        if (counter == -1){
                cout<<-1<<endl;
        }

  return 0;
}