//Binary Swap
#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char a[100001],b[100001];
	cin>>a;
	cin>>b;	
    long long count1a = 0,count1b = 0,count = 0;
    for(long long i=0; i<strlen(a); i++)
    {
        if(a[i] == '1')
        count1a++;
        if(b[i] == '1')
        count1b++;
    }
    if(count1a != count1b)
    {
    printf("-1");
    return 0;
    }
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]!=b[i])
			count++;
	}
	if(count%2==0)
	cout<<count/2;
	else
	cout<<"-1";
	return 0;
}

