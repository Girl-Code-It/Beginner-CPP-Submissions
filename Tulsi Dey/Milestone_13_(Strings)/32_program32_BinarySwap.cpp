#include <iostream>

using namespace std;

int getRes(string a, string b)
{
	int oneCountA = 0, zeroCountA = 0, oneCountB = 0, zeroCountB = 0;
	int diff = 0;

	for(int i = 0; i < a.length(); i++)
	{
		if(a[i] == '0') zeroCountA++;
		else oneCountA++;
		if(b[i] == '0') zeroCountB++;
		else oneCountB++;
	}

	if(zeroCountA != zeroCountB || oneCountA != oneCountB ) return -1;

	for(int i = 0; i < a.length(); i++)
	{
		if(a[i] != b[i]) diff++;
	}
    if(diff%2 == 0) return diff/2;
	return -1;
}
int main()
{
	string a, b; cin>>a>>b;
	cout<<getRes(a,b)<<endl;

	return 0;
}