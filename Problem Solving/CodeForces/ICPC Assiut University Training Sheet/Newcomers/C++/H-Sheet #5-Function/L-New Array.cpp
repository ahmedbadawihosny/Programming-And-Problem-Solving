#include <iostream>
using namespace std;

void NewArray(int a[], int b[], int n);

int main() {
    int n;
    cin>>n;
    int a[n],b[n];
    for (int i = 0;i < n;i++){
    cin>>a[i];
    } 
    for (int i = 0;i < n;i++){
    cin>>b[i];
    }
      NewArray(a,b,n);
      
      return 0;
}

void NewArray(int a[], int b[], int n) {
    int c[2 * n];
    for (int i = 0;i < n;i++){
  c[i] = b[i];
    } 
    for (int i = 0;i < n;i++){
  c[i+n] = a[i];
    } 
    for (int i = 0; i < 2 * n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}