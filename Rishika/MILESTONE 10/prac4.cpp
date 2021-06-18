//prac4-reference variable
#include<iostream>
using namespace std;
int main()
{
	int a=100;
	int &ref=a;
	cout<<"Address of variable a- "<<&a<<endl;
	cout<<"Address of reference variable- "<<&ref;
}
