using namespace std;
#include<iostream>
int main ()
{
	int T, N;
	string str;

	cin >> T;

	for(int i = 0; i < T; i++)
	{
		cin >> N >> str;
		bool error = false;
		for(int j = 0; j < N; j++)
		{
			if( str[j] == 'A' ||
			 str[j] == 'T' ||
			 str[j] == 'G' ||
			 str[j] == 'C'
			)
			{
				switch(str[j])
				{
					case 'A' :
						str[j] = 'T';
						break;
				    case 'T' :
						str[j] = 'A';
						break;
				    case 'G' :
						str[j] = 'C';
						break;
					case 'C' :
						str[j] = 'G';
						break;
				}
			}
			else
			{
				error = true;
				break;
			}
		}

		if (error)
			cout << "Error RNA nucleobases found!" << endl;
		else
			cout << str << endl;
	}
	return 0;
}
