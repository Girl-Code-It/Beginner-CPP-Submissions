//Q1:  Write a menu driven C++ program to do following operation on two dimensional array A of size m x n. You should use user-defined functions which accept 2-D array A, and its size m and n as arguments. The options are:

//To input elements into matrix of size m x n
//To display elements of matrix of size m x n
//Sum of all elements of matrix of size m x n
//To display row-wise sum of matrix of size m x n
//To display column-wise sum of matrix of size m x n
//To create transpose of matrix B of size n x m
#include<iostream>
using namespace std;
void inp(int*a,int*m,int*n)
{   int i,j;
	cout<<"Enter number of rows = ";
	cin>>*m;
	cout<<"Enter number of columns = ";
	cin>>*n;
	cout<<"Enter elements in the matrix = ";
	for(i=0;i<*m;i++)
	{
		for(j=0;j<*n;j++)
		{
			cin>>*(a+(i*(*n))+j);
		}
	}
}
void disp(int*a,int*m,int*n)
{int i,j;
for(i=0;i<*m;i++)
{
	for(j=0;j<*n;j++)
	{
		cout<<*(a+(i*(*n))+j)<<"  ";
	}
	cout<<endl;
}}
int sum(int*a,int*m,int*n)
{   int sum=0;
	for(int i=0;i<*m;i++)
	{
		for(int j=0;j<*n;j++)
		{
			sum=sum+(*(a+(i*(*n))+j));
		}
	}
	cout<<endl<<"Sum of all elements of the matrix is = "<<sum;
}
void rowsum(int*a,int*m,int*n)
{   int rs,i,j;
	for(i=0;i<*m;i++)
	{   int rs=0;
		for(j=0;j<*n;j++)
		{
			rs=rs+*(a+(i*(*n))+j);
		}
		cout<<"Sum of elements of Row "<<i<<" = "<<rs<<endl;
	}
}
void colsum(int*a,int*m,int*n)
{
	int cs,i,j;
	for(j=0;j<*n;j++)
	{
		cs=0;
		for(i=0;i<*m;i++)
		{
			cs=cs+*(a+(i*(*n))+j);
		}
		cout<<"Sum of elements of Column "<<j<<" = "<<cs<<endl;
//
}
}
void trans(int*a,int*m,int*n)
{   int b[10][10];
	int i,j;
	for(i=0;i<*m;i++)
	{
		for(j=0;j<*n;j++)
		{
			b[i][j]=*(a+(j*(*m))+i);
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int a[10][10],m,n,ch;
	do{
		cout<<endl<<"   MENU   "<<endl<<"1. Input "<<endl<<"2. Display "<<endl<<"3. Sum of all elements "<<endl;
		cout<<"4. Row wise sum "<<endl<<"5. Column wise sum "<<endl<<"6. Transpose of Matrix "<<endl<<"7. End "<<endl;
		cout<<endl<<"Enter a choice - ";
		cin>>ch;
		switch(ch){
		case 1: inp(*a, &m, &n);
                break;
			case 2: disp(*a, &m, &n);
                break;
            case 3: sum(*a,&m,&n);
                break;
            case 4: rowsum(*a,&m,&n);
                break;
            case 5: colsum(*a,&m,&n);
                break;
            case 6: trans(*a,&m,&n);
                break;
            case 7: exit(0);
                break;
            default: cout<<"Wrong";
                break;
	}
	}while(ch!=7);
}
