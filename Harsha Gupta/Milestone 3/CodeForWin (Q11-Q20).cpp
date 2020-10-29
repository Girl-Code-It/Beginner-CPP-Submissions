/* https://codeforwin.org/2015/06/for-do-while-loop-programming-exercises.html (Question 11 to 20) */

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int ch;
	cout<<"Menu Driven Program for Milestone 3";
	cout<<"\n Enter the question no (11-20):";
	cin>>ch;
	switch(ch)
	{
		case 11: {
			int num,lastdigit,firstdigit;
			cout<<"Enter the number:";
   			cin>>num;
   			firstdigit=num;
   			lastdigit= num%10;
   			while(firstdigit>10)
   			{ 
   			firstdigit=firstdigit/10;
   			}
   			cout<<endl<<"First digit is  "<<firstdigit;
   			cout<<endl<<"Last digit is  "<<lastdigit;
			break;
		}
		case 12: {
			int num,lastdigit,firstdigit,sum;
			cout<<"Enter the number  ";
   			cin>>num;
   			firstdigit=num;
   			lastdigit= num%10;
   			while(firstdigit>10)
   			{ 
  			 firstdigit=firstdigit/10;
  			} 
  			sum=firstdigit+lastdigit;
  			cout<<"The sum of first and last digit "<<sum;
			break;
		}
		case 13: {
			int num,lastdigit,firstdigit,swapped=0,c=0;
			cout<<"Enter the number  ";
   			cin>>num;
   			firstdigit=num;
   			lastdigit= num%10;
   			while(firstdigit>10)
   			{ 
  		 		firstdigit=firstdigit/10;
  		 		c++;
  	 		} 
			int val=(int)pow(10,c);
  	 		swapped=lastdigit*val;
  	 		swapped=swapped+num%val;
  	 		swapped-=lastdigit;
  	 		swapped+=firstdigit;
  	 		cout<<swapped<<endl;
			break;
		}
		case 14: {
			int a, t, k;
    		cout << "Enter a number" << endl;
   			cin >>a;
    		k = 0;
    		while (a>0) {
        		t = a%10;
        		k = t+k;
        		a = a/10;
    		}
		   	cout <<k;
			break;
		}
		case 15: {
			int a, b, c;
    		cout << "Enter a number:" << endl;
    		cin >> a;
    		b = 1;
    		while (a>0) {
        		c = a%10;
        		b = c*b;
        		a = a/10;
    		}
   			cout << "Product of digits is " << b << endl;
			break;
		}
		case 16: {
			int a, b, c;
    		cout << "Enter a number." << endl;
    		cin >> a;
    		b = 0;
    		while (a>0) {
       			c = a%10;
       			b = b*10+c;
       			a = a/10;
   			}
        	cout << "Reverse of number is " << b << endl;
			break;
		}
		case 17: {
			int a, b, c, k;
    		cout << "Enter a number." << endl;
    		cin >> a;
   		 	b = 0, k = a;
    		while (k>0) {
       	 		c = k%10;
        		b = b*10+c;
        		k = k/10;
    		}
    		if (a==b) {
        	 cout << "This number is a palindrome." << endl;
    		}
    		else {
        	 cout << "This number is not a palindrome." << endl;
    		}
			break;
		}
		case 18: {
			long int num,n;
    		int i,last,f[10];
   			cout<<"\n Enter a number: ";
    		cin>>num;
    		n=num;
    		for(i=0; i<10; i++)
    		{
       			 f[i] = 0;
    		}
			while(n>0)
    		{
        		last=n%10;
        		n/=10;
        		f[last]++;
    		}
			cout<<"\n Frequency of each digit in "<<num<<" is : ";
   		 	for(i=0; i<10; i++)
    		{
        		cout<<"\n Frequency of "<<i<<" = "<<f[i];
    		}
			break;
		}
		case 19: {
			int num,base,n,rev=0;
 			cout<<"\n Enter a digit: ";
 			cin>>n;
    		switch(n)
    		{
			case 0: cout<<"Zero "; break;
      		case 1: cout<<"One "; break;
      		case 2: cout<<"Two "; break;		
	  		case 3: cout<<"Three "; break;
	 	 	case 4: cout<<"Four "; break;		
	  		case 5: cout<<"Five "; break;
	  		case 6: cout<<"Six " ; break;
	  		case 7: cout<<"Seven "; break;
	  		case 8: cout<<"Eight "; break;
	  		case 9: cout<<"Nine "; break;
    		}	 
			break;
		}

		case 20: {
	    int i;
    	char ch;
  		for(i=1;i<=255;i++)
  		{ 
		ch=i;
  		cout<<"ASCII value of character  "<<ch<<" is  "<<i<<endl;
  		}
		break;
		}
	default: cout<<"\n Invalid Question";
	}
	
	return 0;
}
