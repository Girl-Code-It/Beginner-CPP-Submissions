#include<iostream>
#include<string>
using namespace std;

void lex_sorting(string* S, int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(S[j] > S[j+1])
			{
				string temp = S[j];
				S[j] = S[j+1];
				S[j+1] = temp;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int points[n];
	string name[n];

	for(int i=0; i<n; i++)
	{
		cin >> name[i];
		cin >> points[i];
	}

	//find restro with max point
	int max_points_index = 0;
	for(int i=1; i<n; i++)
		if(points[i] > points[max_points_index])
			max_points_index = i;
	int max_points = points[max_points_index];
	int total_max =0;
	for(int i=0; i<n; i++)
		if(points[i] == max_points)
			total_max++;
		
	int arr[total_max];

	for(int i=0, j=0; i<n; i++)
	{
		if(points[i] == max_points)
		{
			arr[j++] = i;
		}
	}
	

	string S[total_max];

	for(int i=0; i<total_max; i++)
	{
		S[i] = name[arr[i]];
	}

	lex_sorting(S, total_max);


	cout << S[0] << endl;
}
