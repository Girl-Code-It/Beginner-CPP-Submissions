//---call by value---
//#include<iostream>
//using namespace std;
//int increm(int x)
//{
//	x=x+1;
//	cout<<"add. of x="<<&x<<endl;
//}
//int main()
//{
//	int a=10;
//	increm(a);
//	cout<<a<<endl;
//	cout<<"add. of a="<<&a;
//}
//call by reference
#include<iostream>
using namespace std;
int increm(int *x)
{
	*x=(*x)+1;
}
int main()
{
	int a=10;
	increm(&a);
	cout<<a;
}

