/*Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail */ 

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;


void marks(int x)
{ if(x>=91&&x<=100)
   cout<<"AA";
   else if(x>=81&&x<=90)
   cout<<"AB";
   else if(x>=71&&x<=80)
   cout<<"BB";
   else if(x>=61&&x<=70)
   cout<<"BC";
   else if(x>=51&&x<=60)
   cout<<"CD";
   else if(x>=41&&x<=50)
   cout<<"DD";
   else if(x<=40)
   cout<<"FAIL";
   else
   cout<<"INVALID INPUT ";
}

int main()
{   int n,m;
    cout<<"Enter the  marks "<<endl;
    cin>>n;
     marks(n);
    
	getch();
	return 0;
	
}
