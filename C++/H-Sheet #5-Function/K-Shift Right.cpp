#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN = 10005;
int A[MAXN];
void reverse(int start, int end) {
  while (start < end) {
      swap(A[start], A[end]);
      start++;
      end--;
  }
}

void shiftRight(int n, int x) {
  x = x % n; 
  reverse(0, n - 1);
  reverse(0, x - 1);
  reverse(x, n - 1);
}

void printArray(int n) {
  for (int i = 0; i < n; i++) {
      cout << A[i] << " ";
  }
}

int main() {
  int n, x;
  cin >> n >> x;
  for (int i = 0; i < n; i++) {
      cin >> A[i];
  }
  shiftRight(n, x);
  printArray(n);
  return 0;
}