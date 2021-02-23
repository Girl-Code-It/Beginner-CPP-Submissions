/*character arrays and pointers
#include<iostream>
using namespace std;
int main()
{
	char c[5]="john";
	char (*c1)[5];
	c1=&c;
	cout<<c1<<" "<<*c1<<" "<<&c1<<" "<<&c<<" "<<*c;
}*/
#include<iostream>
using namespace std;
void print(char*c)
{
	while(*c!='\0')
	{
		cout<<*c<<" ";
		c++;
	}
}
int main()
{
	char c[5]="john";
	print(c);
}
