/* https://codeforwin.org/2015/06/for-do-while-loop-programming-exercises.html (Question 37 to 50) */

#include<iostream>
#include<math.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main() {
  int ch;
  cout << "Menu Driven Program for Milestone 7";
  cout << "\n Enter the question no (37-50):";
  cin >> ch;
  switch (ch) {
  case 37: {
    char x[9], y[9];
    cout << "\n Enter the binary number: ";
    gets(x);
    cout << "\n The 1s compliment is: ";
    for (int i = 0; i < 9; i++) {
      if (x[i] == '1') {
        y[i] = '0';
      } else {
        y[i] = '1';
      }
    }
    y[8] = '\0';
    puts(y);

    break;
  }
  case 38: {
    char x[9], y[9], z[9];
    int carry = 1;
    cout << "Enter the binary number: ";
    cin >> x;
    for (int i = 0; i < 8; i++) {
      if (x[i] == '0') {
        y[i] = '1';
      } else {
        y[i] = '0';
      }
    }
    y[8] = '\0';
    for (int i = 7; i >= 0; i--) {
      if (y[i] == '1' && carry == 1) {
        z[i] = '0';
      } else if (y[i] == '0' && carry == 1) {
        carry = 0;
        z[i] = '1';
      } else {
        z[i] = y[i];
      }
    }
    z[8] = '\0';
    cout << z << endl;
    break;
  }
  case 39: {
    long long x, n;
    int d, place = 1, oct = 0;
    int ar[] = {
      0,
      1,
      10,
      100,
      11,
      101,
      110,
      111
    };
    cout << "enter the binary number: ";
    cin >> n;
    cout << "\nThe octal number is: ";
    x = n;
    while (x != 0) {
      d = x % 1000;
      for (int i = 0; i <= 7; i++) {
        if (d == ar[i]) {
          oct = (i * place) + oct;
        }
      }
      place *= 10;
      x /= 1000;
    }
    cout << oct;
    break;
  }
  case 40: {
    long long x, n;
    int i = -1, d, bin = 0;
    cout << "Enter the binary number: ";
    cin >> x;
    n = x;
    while (n != 0) {
      d = n % 10;
      i++;
      bin += d * pow(2, i);
      n /= 10;
    }
    cout << bin;
    break;
  }
  case 41: {
    long long x, n;
    int d, j = 0;
    char hex[20];
    int ar[] = {
      0,
      1,
      10,
      11,
      100,
      101,
      110,
      111,
      1000,
      1001,
      1010,
      1011,
      1100,
      1101,
      1110,
      1111
    };
    cout << "Enter the binary number: ";
    cin >> x;
    n = x;
    while (n != 0) {
      d = n % 10000;
      for (int i = 0; i < 16; i++) {
        if (ar[i] == d) {
          if (i < 10) {
            hex[j] = (char)(i + 48);
          } else if (i > 10) {
            hex[j] = (char)(i + 55);
          }
        }
      }
      j++;
      n /= 10000;
    }
    hex[j] = '\0';
    strrev(hex);
    cout << hex << endl;
    break;
  }
  case 42: {
    int bin = 0;
    int n, oct[] = {
      0,
      1,
      10,
      11,
      100,
      101,
      110,
      111
    };
    int d, place = 1;
    cout << "enter the octal number: ";
    cin >> n;
    cout << "\nThe binary number is: ";
    while (n != 0) {
      d = n % 10;
      for (int i = 0; i < 8; i++) {
        if (i == d) {
          bin = (oct[i] * place) + bin;
        }
      }
      n /= 10;
      place *= 1000;
    }
    cout << bin;
    break;
  }
  case 43: {
    int i = 0, n, d, deci = 0;
    cout << "Enter the octal number: ";
    cin >> n;
    cout << "\nThe decimal number is: ";
    while (n != 0) {
      d = n % 10;
      deci += d * pow(8, i);
      n /= 10;
      i++;
    }
    cout << deci;
    break;
  }
  case 44: {
    int oct[] = {
      0,
      1,
      10,
      11,
      100,
      101,
      110,
      111
    };
    int bin = 0, d, place = 1, n;
    cout << "Enter the octal number: ";
    cin >> n;
    while (n != 0) {
      d = n % 10;
      for (int i = 0; i < 8; i++) {
        if (i == d) {
          bin = (oct[i] * place) + bin;
        }
      }
      n /= 10;
      place *= 1000;
    }
    cout << "\n The binary is: " << bin;
    int j = 0, ar[] = {
      0,
      1,
      10,
      11,
      100,
      101,
      110,
      111,
      1000,
      1001,
      1010,
      1011,
      1100,
      1101,
      1110,
      1111
    };
    char hex[10];
    while (bin != 0) {
      d = bin % 10000;
      for (int i = 0; i < 16; i++) {
        if (ar[i] == d) {
          if (i < 10) {
            hex[j] = (char)(i + 48);
          } else if (i > 10) {
            hex[j] = (char)(i + 55);
          }
          j++;
        }
      }
      bin /= 10000;
      place *= 10000;
    }
    hex[j] = '\0';
    strrev(hex);
    cout << "\nThe hexadecimal number is: " << hex;
    break;
  }
  case 45: {
    int n, bin = 0, place = 1, d;
    cout << "enter the decimal number: ";
    cin >> n;
    while (n != 0) {
      d = n % 2;
      bin = bin + (d * place);
      n /= 2;
      place *= 10;
    }
    cout << bin;
    break;
  }
  case 46: {
    int n, oct = 0, place = 1, d;
    cout << "enter the decimal number: ";
    cin >> n;
    while (n != 0) {
      d = n % 8;
      oct = oct + (d * place);
      n /= 8;
      place *= 10;
    }
    cout << oct;
    break;
  }
  case 47: {
    int n, d, j = 0;
    char hex[10], ar[] = {
      '0',
      '1',
      '2',
      '3',
      '4',
      '5',
      '6',
      '7',
      '8',
      '9',
      'A',
      'B',
      'C',
      'D',
      'E',
      'F'
    };
    cout << "Enter the decimal number: ";
    cin >> n;
    while (n != 0) {
      d = n % 16;
      hex[j] = ar[d];
      j++;
      n /= 16;
    }
    hex[j] = '\0';
    strrev(hex);
    cout << hex;
    break;
  }
  case 48: {
    char n[5], bin[60] = "";
    cout << "Enter the hexadecimal number: ";
    gets(n);
    for (int i = 0; n[i] != '\0'; i++) {
      switch (n[i]) {
      case '0':
        strcat(bin, "0000");
        break;
      case '1':
        strcat(bin, "0001");
        break;
      case '2':
        strcat(bin, "0010");
        break;
      case '3':
        strcat(bin, "0011");
        break;
      case '4':
        strcat(bin, "0100");
        break;
      case '5':
        strcat(bin, "0101");
        break;
      case '6':
        strcat(bin, "0110");
        break;
      case '7':
        strcat(bin, "0111");
        break;
      case '8':
        strcat(bin, "1000");
        break;
      case '9':
        strcat(bin, "1001");
        break;
      case 'a':
      case 'A':
        strcat(bin, "1010");
        break;
      case 'b':
      case 'B':
        strcat(bin, "1011");
        break;
      case 'c':
      case 'C':
        strcat(bin, "1100");
        break;
      case 'd':
      case 'D':
        strcat(bin, "1101");
        break;
      case 'e':
      case 'E':
        strcat(bin, "1110");
        break;
      case 'f':
      case 'F':
        strcat(bin, "1111");
        break;
      default:
        cout << "Invalid hexadecimal input.";
      }
    }
    puts(bin);
    break;
  }
  case 49: {
    char n[5];
    int bin = 0, place = 1;
    cout << "Enter the hexadecimal number: ";
    gets(n);
    cout << "\nThe binary number is: ";

    for (int i = 0; n[i] != '\0'; i++) {
      bin = bin * place;
      switch (n[i]) {
      case '0':
        bin += 0;
        break;
      case '1':
        bin += 1;
        break;
      case '2':
        bin += 10;
        break;
      case '3':
        bin += 11;
        break;
      case '4':
        bin += 100;
        break;
      case '5':
        bin += 101;
        break;
      case '6':
        bin += 110;
        break;
      case '7':
        bin += 111;
        break;
      case '8':
        bin += 1000;
        break;
      case '9':
        bin += 1001;
        break;
      case 'a':
      case 'A':
        bin += 1010;
        break;
      case 'b':
      case 'B':
        bin += 1011;
        break;
      case 'c':
      case 'C':
        bin += 1100;
        break;
      case 'd':
      case 'D':
        bin += 1101;
        break;
      case 'e':
      case 'E':
        bin += 1110;
        break;
      case 'f':
      case 'F':
        bin += 1111;
        break;
      default:
        cout << "Invalid hexadecimal input.";
      }
      place *= 10000;
    }
    cout << bin;
    int j = 0, d, octal[] = {
      0,
      1,
      10,
      11,
      100,
      101,
      110,
      111
    };
    int oct = 0;
    int p = 1;
    cout << "\nThe octal number is: ";
    while (bin != 0) {
      d = bin % 1000;
      for (int i = 0; i < 8; i++) {
        if (octal[i] == d) {
          oct = oct * p + i;
        }
      }
      p = p * 10;
      bin /= 1000;
    }
    cout << oct;
    break;
  }
  case 50: {
    char x[10];
    int d, deci = 0, j = 0, l, y;
    cout << "Enter the number: ";
    gets(x);
    l = strlen(x);
    cout << l;
    for (int i = l - 1; i >= 0; i--) {
      if (x[i] >= '0' && x[i] <= '9') {
        y = x[i] - 48;
      } else if (x[i] >= 'a' && x[i] <= 'f') {
        y = x[i] - 87;
      } else if (x[i] >= 'A' && x[i] <= 'F') {
        y = x[i] - 55;
      }
      deci += y * pow(16, j);
      j++;
    }
    cout << "\nThe decimal value is: " << deci;
    return 0;
    break;
  }
  default:
    cout << "\n Invalid Question";
  }

  return 0;
}
