#include <iostream>
#define Code_acceleration ios::sync_with_stdio(false); cin.tie(nullptr);
#define ii int
using namespace std;

void matrixSum(ii a[][100], ii b[][100], ii r, ii c, ii result[][100], ii i, ii j) {
    if (i==r && j==c) {
        result[i][j]=a[i][j]+b[i][j];
        return;
    }
  
    result[i][j]=a[i][j]+b[i][j];
    if (j<c) {
        matrixSum(a,b,r,c,result,i,j+1);
    }
    if (j==c) {
        matrixSum(a,b,r,c,result,i+1,0);
    }
}

int main(){
  Code_acceleration
    ii r,c;
    cin>>r>>c;
    ii a[100][100],b[100][100],result[100][100];
    for (ii i=0;i<r;i++) {
        for (ii j=0;j<c;j++) {
            cin>>a[i][j];
        }
    }
    for (ii i=0;i<r;i++) {
        for (ii j=0;j<c;j++) {
            cin>>b[i][j];
      }
    }
    matrixSum(a,b,r,c,result,0,0);
    for (ii i=0;i<r;i++) {
        for (ii j=0;j<c;j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}