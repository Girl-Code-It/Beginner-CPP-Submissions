#include <iostream>
using namespace std;
int main()
{
	long long decimal, tempdecimal, octal;
	int i, rem, place = 1;
	octal = 0;
	cout << "enter any decimal number:";
	cin >> decimal;
	tempdecimal = decimal;
	while (tempdecimal != 0)
	{
		rem = tempdecimal % 8;
		octal = (rem * place) + octal;
		tempdecimal /= 8;
		place *= 10;
	}
	cout << "decimal number is =" << decimal << endl;
	cout << "octal number is=" << octal << endl;
}
