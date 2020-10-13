#include <iostream>
using namespace std;
int main()
{
	long long decimal, tempdecimal, binary;
	int rem, place = 1;
	binary = 0;
	cout << "enter any decimal number:";
	cin >> decimal;
	tempdecimal = decimal;
	while (tempdecimal != 0)
	{
		rem = tempdecimal % 2;
		binary += (rem * place);
		tempdecimal /= 2;
		place *= 10;
	}
	cout << "decimal number is =" << decimal << endl;
	cout << "binary number is=" << binary;
	return 0;
}
