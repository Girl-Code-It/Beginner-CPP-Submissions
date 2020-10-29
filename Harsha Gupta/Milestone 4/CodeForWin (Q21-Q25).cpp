/* https://codeforwin.org/2015/06/for-do-while-loop-programming-exercises.html (Question 21 to 25) */

#include<iostream>

#include<math.h>

using namespace std;

int main() {
  int ch;
  cout << "Menu Driven Program for Milestone 4";
  cout << "\n Enter the question no (21-25):";
  cin >> ch;
  switch (ch) {
  case 21:
    {
      int prod = 1,
      base,
      exp;

      cout << "Enter the base number: " << endl;
      cin >> base;
      cout << "Enter the exponent power: " << endl;
      cin >> exp;

      for (int i = 1; i <= exp; i++)
        prod = prod * base;

      cout << base << "^" << exp << " = " << prod << endl;

      break;
    }
  case 22:
    {
      int i,
      prod = 1,
      num;

      cout << "Enter the  number: " << endl;
      cin >> num;
      cout << "Factors of " << num << " is ";

      for (i = 1; i <= num; i++) {
        if (num % i == 0)
          cout << i << "	";
      }
      break;
    }
  case 23:
    {
      int i,
      num,
      fact = 1;

      cout << "Enter the  number:" << endl;
      cin >> num;

      for (i = 1; i <= num; i++) {
        fact = fact * i;
      }

      cout << "Factorial of the number is " << fact;
      break;
    }
  case 24:
    {
      int i,
      n1,
      n2,
      min,
      hcf = 1;

      cout << "Enter the two numbers: " << endl;
      cin >> n1;
      cin >> n2;

      min = (n1 < n2) ? n1 : n2;
      for (i = 1; i <= min; i++) {
        if (n1 % i == 0 && n2 % i == 0)
          hcf = i;
      }
      cout << "HCF is " << hcf;
      break;
    }
  case 25:
    {
      int i,
      n1,
      n2,
      prod,
      lcm = 1;

      cout <<"\n Enter the numbers :";
      cin >> n1;
      cin >> n2;

      prod = n1 * n2;

      for (i = 1; i <= prod; i++) {
        if (i % n1 == 0 && i % n2 == 0) {
          cout <<i;
          break;
        }
      }
      break;
    }
  default:
    cout << "\n Invalid Question";
  }

  return 0;
}
