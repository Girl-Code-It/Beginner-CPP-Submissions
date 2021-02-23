//q3- a company decidied to give bonus of 5% to employees serving for more than 5 years. ask the salary and years of service and print the net bonus amount.
#include<iostream>
using namespace std;
int main()
{ int y,s,b;
 cout<<"enter the years of service and your salary.";
 cin>>y>>s;
 b=0.05*s;
 if(y>=5)
 {cout<<"you get a bonus of"<< b<<"rupees." ;}
 else{cout<<"no bonus.";
 }return 0;
}
