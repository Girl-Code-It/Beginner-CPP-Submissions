#include<iostream>
using namespace std;
int main()
{    
    string A,B;
    long long i;
    getline(cin,A);
    getline(cin,B);
    if(A.length()!=B.length())
    {   
	cout<<"NO"<<endl;
    }
    else
    {   
	for( i=0;i<A.length();i++)
        {   
	    if(A[i]>B[i])
            {   
		cout<<"NO"<<endl;
                break;
            }
        }
        if(i==A.length())
            cout<<"YES"<<endl;
    }
    return 0;
}