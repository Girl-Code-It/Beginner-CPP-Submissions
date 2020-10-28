#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;
	while(T--)
	{
		int N;
		cin >> N;

		int A[N];

		for(int i=0; i<N; i++)
			cin >> A[i];
		
		for(int i=0; i<N; i++)
		{
			int count=0;
			for(int j=i+1; j<N; j++)
			{
				if(A[j] < A[i])
					count++;
			}
			cout << count << " ";
		}
		cout << endl;
	}
}
