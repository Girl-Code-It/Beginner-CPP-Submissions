#include<iostream>
using namespace std;
int main()
{
int origNum, num, rem, sum=0;
cout<<"enter a positive integer";
cin>>origNum;
num=origNum;
while(num!=0)
{
	rem=num%10;
	sum+=rem*rem*rem;
	num/=10;
}
(sum==origNum)?cout<<"armstrong":cout<<"not armstrong";
}
