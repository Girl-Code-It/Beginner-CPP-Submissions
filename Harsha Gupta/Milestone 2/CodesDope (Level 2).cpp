//Menu Driver Program for Level 2 (CodesDope) : https://www.codesdope.com/practice/java-decide-if-or-else/

#include<iostream>
using namespace std;

int main()
{
	int ch;
	cout<<"Menu Driven Program for Level 2";
	cout<<"\n Enter the question no :";
	cin>>ch;
	switch(ch)
	{
		case 1: {
		        int year;
				cout<<"Program to check if a year is leap year or not";
		        cout<<"\n Enter year:";
		        cin>>year;
		        if((year%4==0) && (year%100==0) || (year%400==0))
		           cout<<"\n Leap year";
		        else
		           cout<<"\n Not a Leap Year";
		        break;
		    }
		case 2: {
			    int age;
			    char s;
			    char m;
			    cin>>age;
			    cin>>s;
			    cin>>m;
			    if(s=='F')
			       cout<<"\n Work in urban areas";
			    else if(s=='M' && (age>=20 && age<=40))
			       cout<<"\n Work Anywhere";
			    else if(s=='M' && (age>40 && age<=60))
			       cout<<"\n work in urban areas";
			    else
			       cout<<"\n ERROR";
			    break;
		    }
		case 3: {
			    int no,digit,rev=0;
			    cout<<"\n Enter the four digit no:";
			    cin>>no;
			    while(no>0)
			    {
			    	digit=no%10;
			    	rev=(rev*10)+digit;
			    	no=no/10;
				}
				cout<<endl<<rev;
		     	break;
		   }
		default: cout<<"\n Invalid Question";
	}
	
	return 0;
}
