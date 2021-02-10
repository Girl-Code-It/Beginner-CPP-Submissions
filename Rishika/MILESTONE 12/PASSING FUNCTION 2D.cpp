#include<iostream>
#include<stdlib.h>

using namespace std;

void inp(int*a, int*m, int*n)
{
	cout<<endl;
	cout<<"Enter the number of rows :- ";
	cin>>*m;
	cout<<"Enter the number of columns :- ";
	cin>>*n;
	cout<<"Enter elements in the matrix :- "<<endl;
	for(int i=0;i<*m;i++)
	{
		for(int j=0;j<*n;j++)
		{
            cin>>*(a + ( i * (*n)) + j);
		}
	}
}

void disp(int*a, int*m, int*n)
{
	cout<<"Elements of matrix are :- ";
	for(int i=0;i<*m;i++)
	{
		cout<<endl;
		for(int j=0;j<*n;j++)
		{
			cout<<*(a + ( i * (*n)) + j)<<"  ";
		}
	}
}

int main()
{
	int a[10][10],m,n,ch;
	do{
		cout<<endl<<"-----MENU-----"<<endl<<"1. INPUT "<<endl<<"2. DISPLAY "<<endl<<"3. END "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: inp(*a, &m, &n);
                break;
			case 2: disp(*a, &m, &n);
                break;
            case 3: exit(0);
                break;
            default: cout<<"Wrong";
                break;
		}
	}while(ch!=3);
    return 0;
}

