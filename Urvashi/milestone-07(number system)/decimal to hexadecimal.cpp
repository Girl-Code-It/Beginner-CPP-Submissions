#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char HEXVALUE[] = {'0', '1', '2 ', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	long long decimal, tempdecimal;
	char hex[65];
	int index, rem;
	cout << "enter any decimal number";
	cin >> decimal;
	tempdecimal = decimal;

	while (tempdecimal != 0)
	{
		rem = tempdecimal % 16;
		hex[index] = HEXVALUE[rem];
		tempdecimal /= 16;
		index++;
	}
	hex[index] = '\0';
	strrev(hex);
	cout << "decimal number is=" << decimal << endl;
	cout << "hexadecimal number is=" << hex;
}
