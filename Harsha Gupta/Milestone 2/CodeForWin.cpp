#include<iostream>
using namespace std;

int main()
{
	int ch;
	cout<<"Menu Driven Program for Level 1";
	cout<<"\n Enter the question no :";
	cin>>ch;
	switch(ch)
	{
		case 1: {
			int n;
			cin>>n;
			int i=1;
			while(i<=n)
			{
			  cout<<i<<"	";
			  i++;
		    }
			break;
		}
		case 2: {
			int n;
			cin>>n;
			int i=n;
			while(i>0)
			{
			   cout<<i<<"	";
			   i--;	
			}
			break;
		}
		case 3: {
			int ch=97;
			while(ch > 96 && ch < 1233)
			{
				cout<<(char)ch<<"	  ";
				ch++;
			}
			break;
		}
		case 4: {
			int i=2;
			while(i<=100)
			{
				if(i%2==0)
				{
					cout<<i<<" ";
				}
				i++;
			}
			break;
		}
		case 5: {
			int i=1;
			while(i<=100)
			{
				if(i%2!=0)
				{
					cout<<i<<" ";
				}
				i++;
			}
			break;
		}
		case 6: {
			int n, sum=0;
			cin>>n;
			int i=1;
			while(i<=n)
			{
			  sum+=i;
			  i++;
		    }
		    cout<<endl<<sum;
			break;
		}
		case 7: {
			int n, sum=0;
			cin>>n;
			int i=1;
			while(i<=n)
			{
			  if(i%2==0)
			  {
			  sum+=i;
			  i++;
		      }   
		    }
		    cout<<endl<<sum;
			break;
		}
		case 8: {
			int n, sum=0;
			cin>>n;
			int i=1;
			while(i<=n)
			{
			  if(i%2!=0)
			  {
			  sum+=i;
			  i++;
		      }   
		    }
		    cout<<endl<<sum;
			break;
		}
		case 9: {
			int i=1,no;
			cin>>no;
			while(i<=10)
			{ 
			    cout<<no<<" X "<<i<<" = "<<no*i<<endl;
				i++;
			}
			break;
		}

	case 10: {
		int no,c=0,digit;
		cin>>no;
		while(no>0)
		{
			digit=no%10;
			no=no/10;
			c++;
		}
		cout<<c;
		break;
	}
	default: cout<<"\n Invalid Question";
	}
	
	return 0;
}
