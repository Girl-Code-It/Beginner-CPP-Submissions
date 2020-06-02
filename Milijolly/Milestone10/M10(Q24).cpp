//DOB
#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


void Dob(int y,int m,int d)
{  int yy,mm,dd;
  cout<<"Enter the current date "<<endl;
    cin>>yy>>mm>>dd;
	
	if(m==mm&&dd>=d)
	{
	cout<<"Age in years "<<y-yy<<endl;
	cout<<"Age in months "<<(y-yy)*12<<endl;}
	
	else if(m<mm)   
	{
	cout<<"Age in years "<<y-yy-1<<endl;
	cout<<"Age in months "<<((y-yy)*12)-mm-m<<endl; }

    else
    {
    cout<<"Age in years "<<y-yy-1<<endl;
	cout<<"Age in months "<<((y-yy)*12)-mm-m<<endl; }

}

int main()
{   int p,q,n;
    cout<<"enter your DOB(YYYY,MM,DD)"<<endl;
    cin>>p>>q>>n;
    Dob(p,q,n);
    
	getch();
	return 0;
	
}
