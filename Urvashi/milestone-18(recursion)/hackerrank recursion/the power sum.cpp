#include<iostream>
#include<math.h>
using namespace std;
int powersum(int n,int power,int base,int sum)
{
	int x;
	x=(int)pow(base,power);
	if((sum+x)==n)
	return 1;
	else if(sum>n||x>n)
	return 0;
	else
    return powersum(n,power,base+1,(sum+x))+powersum(n,power,base+1,sum); //n=10,power=2...
}
int main()
{
int n,power,ans;
cin>>n;
cin>>power;
ans=powersum(n,power,1,0)	;
cout<<ans;
}
