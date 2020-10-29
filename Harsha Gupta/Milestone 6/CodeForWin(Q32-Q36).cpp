/* https://codeforwin.org/2015/06/for-do-while-loop-programming-exercises.html (Question 32 to 36) */

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int ch;
    cout << "Menu Driven Program for Milestone 6";
    cout << "\n Enter the question no (32-36):";
    cin >> ch;
    switch (ch) {
    case 32: {
      int i, num, sum = 0;
      printf("Enter any number to check perfect number: ");
      scanf("%d", & num);
      for (i = 1; i < num / 2; i++) {
        if (num % i == 0) {
          sum += i;
        }
      }
      if (sum == num) {
        printf("%d is PERFECT NUMBER", num);
      } else {
        printf("%d is NOT PERFECT NUMBER", num);
      }
      break;
    }
    case 33: {
      int main() {
        int i, j, end, sum;
        printf("Enter upper limit: ");
        scanf("%d", & end);
        printf("All Perfect numbers between 1 to %d:\n", end);
        for (i = 1; i <= end; i++) {
          sum = 0;
          for (j = 1; j < i; j++) {
            if (i % j == 0) {
              sum += j;
            }
          }
          if (sum == i) {
            printf("%d, ", i);
          }
        }
        break;
      }
      case 34: {
        int main() {
          int i, originalNum, num, lastDigit, sum;
          long fact;
          printf("Enter any number to check Strong number: ");
          scanf("%d", & num);
          originalNum = num;
          sum = 0;
          while (num > 0) {
            lastDigit = num % 10;
            fact = 1;
            for (i = 1; i <= lastDigit; i++) {
              fact = fact * i;
            }
            sum = sum + fact;
            num = num / 10;
          }
          if (sum == originalNum) {
            printf("%d is STRONG NUMBER", originalNum);
          } else {
            printf("%d is NOT STRONG NUMBER", originalNum);
          }
          break;
        }
        case 35: {
          int i,
          j,
          cur,
          lastDigit,
          end;
          long long fact,
          sum;
          printf("Enter upper limit: ");
          scanf("%d", & end);
          printf("All strong numbers between 1 to %d are:\n", end);
          for (i = 1; i <= end; i++) {
            cur = i;
            sum = 0;
            while (cur > 0) {
              fact = 1 ll;
              lastDigit = cur % 10;
              for (j = 1; j <= lastDigit; j++) {
                fact = fact * j;
              }
              sum += fact;
              cur /= 10;
            }
            if (sum == i) {
              printf("%d, ", i);
            }
          }
          break;
        }
        case 36: {
          int n,
          first = 0,
          second = 1,
          next,
          c;
          printf("Enter the number of terms\n");
          scanf("%d", & n);
          printf("First %d terms of Fibonacci series are:\n", n);
          for (c = 0; c < n; c++) {
            if (c <= 1)
              next = c;
            else {
              next = first + second;
              first = second;
              second = next;
            }
            printf("%d\n", next);
          }
          break;
        }
        default: cout << "\n Invalid Question";
      }

    return 0;
}
