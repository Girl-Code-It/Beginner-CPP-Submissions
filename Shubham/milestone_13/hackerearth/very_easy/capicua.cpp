#include<iostream>
#include<string>

using namespace std;

bool check(int);

int main()
{
	int t, num;
	cin >> t;

	for(int i=0; i<t; i++)
	{
		cin >> num;
		if(check(num))	cout << "YES" << endl;
		else	cout << "NO" << endl;
	}
}

bool check(int num)
{
	//approach wil. be we first calculate reverse of the number
	//then we compare reverse with original one 

	int place=1, rev=0, lastDigit, temp, digits=0;

	temp = num;

	//calculate number of digits 

	while(temp > 0)
	{
		digits++;
		temp /= 10;
	}

	//calculate place 

	for(int i=1; i<digits; i++)
	{
		place *= 10;
	}

	temp = num;

	while(temp > 0)
	{
		lastDigit = temp%10;
		rev += lastDigit*place;
		place /= 10;
		temp /= 10;
	}

	if(rev == num)	return true;
	else	return false;
}

