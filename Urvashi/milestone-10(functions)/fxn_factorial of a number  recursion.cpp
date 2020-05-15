#include<iostream>
using namespace std;
int fact(int num)
{
	return(num<=1)?1:num*fact(num-1);
}
int main()
{
	int num;
	cout<<"enter any number:"<<endl;
	cin>>num;
	cout<<"factorial of "<<num<<"is="<<fact(num);
}
