#include <iostream>
#include <cmath>
using namespace std;

int getMax(int arr[], int n) {
  int maxVal = arr[0];
  for (int i = 1; i < n; i++) {
      if (arr[i] > maxVal) {
          maxVal = arr[i];
      }
  }
  return maxVal;
}

int getMin(int arr[], int n) {
  int minVal = arr[0];
  for (int i = 1; i < n; i++) {
      if (arr[i] < minVal) {
          minVal = arr[i];
      }
  }
  return minVal;
}

bool isPrime(int n) {
  if (n <= 1) {
      return false;
  }
  for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
          return false;
      }
  }
  return true;
}

int countPrimes(int arr[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
      if (isPrime(arr[i])) {
          count++;
      }
  }
  return count;
}

bool isPalindrome(int n) {
  int temp = n;
  int reverse = 0;
  while (temp != 0) {
      int digit = temp % 10;
      reverse = reverse * 10 + digit;
      temp /= 10;
  }
  return n == reverse;
}

int countPalindromes(int arr[], int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
      if (isPalindrome(arr[i])) {
          count++;
      }
  }
  return count;
}

int getMaxDivisors(int arr[], int n) {
  int maxDivisors = 0;
  int num = arr[0];
  for (int i = 0; i < n; i++) {
      int divisors = 0;
      for (int j = 1; j <= arr[i]; j++) {
          if (arr[i] % j == 0) {
              divisors++;
          }
      }
      if (divisors > maxDivisors) {
          maxDivisors = divisors;
          num = arr[i];
      } else if (divisors == maxDivisors && arr[i] > num) {
          num = arr[i];
      }
  }
  return num;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
      cin >> arr[i];
  }
  cout<<"The maximum number : "<<getMax(arr, n)<<endl;
  cout<<"The minimum number : "<<getMin(arr, n)<<endl;
  cout<<"The number of prime numbers : "<<countPrimes(arr, n)<<endl;
  cout<<"The number of palindrome numbers : "<<countPalindromes(arr, n)<< endl;
  cout<<"The number that has the maximum number of divisors : "<<getMaxDivisors(arr, n)<<endl;

  return 0;
}