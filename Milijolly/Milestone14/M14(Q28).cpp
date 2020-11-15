//Rotation
#include <iostream>

using namespace std;

int main() {
   int n,i,j,k,flag;
    char a[1000],b[1000];
    cin>>n;
    cin>>a;
    cin>>b;
    for(i=0; i<n; i++)
    {
        if(a[i]==b[0])
        {
            flag = 1;
            for(j=i,k=0; j<n; j++,k++)
            {
                if(a[j]!=b[k])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<i;
            break;
        }
    }
	return 0;
}

