#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int patient_count[n], vaccine_count[n];

	for (int i = 0; i < n; i++)
		cin >> vaccine_count[i];
	for (int i = 0; i < n; i++)
		cin >> patient_count[i];
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (patient_count[i] < vaccine_count[i])
		{
			cout << "No" << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "Yes" << endl;
}
