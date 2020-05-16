#include<iostream>
#include<math.h>
using namespace std;

void tower_of_hanoi(int n , char A,char B,char C)
{
	if(n>0)
	{	tower_of_hanoi(n-1 ,A, C, B);
	    cout<<"move disk "<<n<<" from rod "<<A<<" to rod "<<C<<endl;
		tower_of_hanoi(n-1 , B ,A, C);
	}
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
	tower_of_hanoi(n ,'1','2','3');

	cout<<pow(2,n)-1<<endl;
	}
}
