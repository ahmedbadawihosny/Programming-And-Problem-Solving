#include <iostream>

using namespace std;

const int MAXN = 505;
int A[MAXN][MAXN];
void swapRow(int n, int x, int y) {
  for (int j = 0; j < n; j++) {
      swap(A[x-1][j], A[y-1][j]);
  }
}

void swapColumn(int n, int x, int y) {
  for (int i = 0; i < n; i++) {
      swap(A[i][x-1], A[i][y-1]);
  }
}

void printMatrix(int n) {
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
          cout << A[i][j] << " ";
      }
      cout << endl;
  }
}

int main() {
  int n, x, y;
  cin >> n >> x >> y;

  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
          cin >> A[i][j];
      }
  }
  swapRow(n, x, y);
  cin >> x >> y;
  swapColumn(n, x, y);
  printMatrix(n);

  return 0;
}