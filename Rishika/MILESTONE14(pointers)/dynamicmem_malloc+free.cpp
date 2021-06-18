//DYNAMIC MEMORY-malloc and free
#include<iostream>
using namespace std;
int main()
{
	int *p; 
	p=(int*)malloc(sizeof(int)); //typecaste void pointer to integer
	*p=10; //give value to this variable
	free(p); //when no use of p, deallocate
	cout<<v; 
}
