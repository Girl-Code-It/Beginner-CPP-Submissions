#include <iostream>

using namespace std;

int main()
{
	int testCases; cin>>testCases;

	while(testCases-->0)
	{
		int size;
		string str, newStr = "";
		bool isTrue = true; 
		cin>>size>>str;

		for(int i = 0; i < size; i++)
		{
			if(str[i] == 'U')
			{
				isTrue = false;
				break;
			}
			else 
			{
				if(str[i] == 'A') newStr += 'T';
				else if(str[i] == 'T') newStr += 'A';
				else if(str[i] == 'G') newStr += 'C';
				else if(str[i] == 'C') newStr += 'G';
			}
		}

		if(isTrue) cout<<newStr<<endl;
		else cout<<"Error RNA nucleobases found!"<<endl;

	}

    return 0;
}