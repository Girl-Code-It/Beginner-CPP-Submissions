/* https://codeforwin.org/2015/06/for-do-while-loop-programming-exercises.html (Question 26 to 31) */

#include<iostream>

#include<math.h>

using namespace std;

int main() {
  int ch;
  cout << "Menu Driven Program for Milestone 5";
  cout << "\n Enter the question no (26-31):";
  cin >> ch;
  switch (ch) {
  case 26: {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x == 1) {
      cout << "\nIt is not prime nor composite";
    }
    int prime = 0;
    for (int i = 2; i <= x / 2; i++) {
      if (x % i == 0) {
        prime = 1;
      }
    }
    if (prime == 1) {
      cout << "\nIt is not prime";
    } else {
      cout << "\nIt is prime";
    }
    break;
  }
  case 27: {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "\nPrime numbers are between 1 and " << n << " are: ";
    for (int i = 2; i <= n; i++) {
      int prime = 0;
      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          prime = 1;
          break;
        }
      }
      if (prime == 0) {
        cout << i << " ";
      }
    }
    break;
  }
  case 28: {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i <= n; i++) {
      int prime = 0;
      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          prime = 1;
          break;
        }
      }
      if (prime == 0) {
        sum += i;
      }
    }
    cout << "\nSum of prime no's is: " << sum;
    break;
  }
  case 29: {
    int x;
    cout << "Enter the number: ";
    cin >> x;
    cout << "\nPrime factors are: ";
    for (int i = 2; i <= x; i++) {
      int prime = 1;
      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          prime = 0;
          break;
        }
      }
      if (prime == 1) {
        if (x % i == 0) {
          cout << i << " ";
        }
      }
    }
    break;
  }
  case 30: {
    int x, n, d, m = 0, i = 0, z;
    cout << "Enter a number: ";
    cin >> x;
    n = x;
    z = x;
    while (z != 0) {
      d = z % 10;
      z /= 10;
      i++;
    }
    while (n != 0) {
      d = n % 10;
      m += pow(d, i);
      n /= 10;
    }
    if (m == x) {
      cout << "\nIt is an amstrong number";
    } else {
      cout << "\nIt is not armstrong number";
    }
    break;
  }
  case 31: {
    int x, n, d, a, z;
    cout << "Enter the value of n: ";
    cin >> x;
    n = x;
    cout << "\nArmstrong numbers are: ";
    for (int k = 1; k <= x; k++) {
      z = k;
      n = k;
      int sum = 0, i = 0;
      while (n != 0) { //for total digits
        d = n % 10;
        n /= 10;
        i++;
      }

      while (z != 0) {
        a = z % 10;
        sum += pow(a, i);
        z /= 10;
      }
      if (k == sum) {
        cout << k << " ";
      }

    }
    break;
  }
  default:
    cout << "\n Invalid Question";
  }

  return 0;
}
