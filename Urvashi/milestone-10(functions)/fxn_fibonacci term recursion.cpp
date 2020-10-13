#include <iostream>
using namespace std;

int fibo(int num)
{

	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else
		return fibo(num - 1) + fibo(num - 2);
}

int main()
{
	int num;
	cout << "enter any no ";
	cin >> num;
	cout << "nth term of fibonacci series  is" << fibo(num);
	return 0;
}
