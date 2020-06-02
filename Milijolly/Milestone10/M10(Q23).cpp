//taxcalculator()

#include<fstream>       //  cin, cout and file related functions
#include<iostream>
#include<conio.h> 

using namespace std;

int taxcalculator(int gs,int ts)
{  int taxinc;
   if(ts>=10,000)
   taxinc=gs-10,000;
   else
   taxinc=gs-ts;
   
   if(taxinc<=100000)
   cout<<"0";
  
   else if(taxinc>=100000&&taxinc<=200000)
   cout<<0.1*(taxinc-10000);
  
   else if(taxinc>=200000&&taxinc<=500000)
   cout<<(0.1*100000)+0.2*(taxinc-100000);
   
   else if(taxinc>=500000)
   cout<<(0.1*100000)+(0.2*300000)+0.3*(taxinc-400000);
   
   else
   cout<<"INVALID DATA INPUT"<<endl;
   
   
}
   
    


int main()
{   int m,n;
    cout<<"enter the the gross salary"<<endl;
    cin>>n;
    cout<<"enter the total savings "<<endl;
    cin>>m;
    cout<<"Calculated Tax is "<<endl;
    taxcalculator(n,m);
	getch();
	return 0;
	
}
