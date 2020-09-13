//Menu Driver Program for Level 1 (CodesDope) : https://www.codesdope.com/practice/java-decide-if-or-else/

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
		        int l,b;
		        cout<<"\n Enter length and breadth:"; 
		        cin>>l>>b;
		        if(l==b)
		          cout<<"\n It is a square";
		        else
		          cout<<"\n It is not a square";
		        break;
		       } 
		          
		case 2: {
		     	int no1,no2;
                cout<<"\n Enter two numbers:";
				cin>>no1>>no2;
				int ans= no1>no2?no1:no2;
				cout<<endl<<ans;
		        break;
	        	}
			
				
		case 3: { 
	            int quantity,price;
		        cout<<"\n Enter the quantity:";
				cin>>quantity;
				if(quantity>1000)
				   price= quantity - (0.1*quantity);
				else
				   price=quantity;
				cout<<endl<<price;
				break;
			    }
				
		case 4: {
		        int years,amount,salary;
		        cout<<"\n Enter salary:";
		        cin>>salary;
		        cout<<"\n Enter the years of service:";
				cin>>years;
				if(years>5)
				   amount= salary + (0.5*salary);
				else
				   amount=salary;
				cout<<endl<<amount;	       
				break;
			    }
				
		case 5: {
		  		int marks;
		        char grade;
				cout<<"\n Enter your marks: ";
				cin>>marks;
				if(marks>80)
				   grade='A';
				else if(marks<=80 && marks>60)
				   grade='B';  
				else if(marks<=60 && marks>50)
				   grade='C'; 
				else if(marks<=50 && marks>45)
				   grade='D'; 
				else if(marks<=45 && marks>25)
				   grade='E'; 
				else 
				   grade='F';
				cout<<endl<<grade;
				break;
			    }
			    
		case 6: {
				int a,b,c;
		        cout<<"\n Enter age of person A , B and C:";
		        cin>>a>>b>>c;
		        if(a>b && a>c)
		          cout<<"\n A is the oldest";
		        else if(b>c && b>a)
		          cout<<"\n B is the oldest";
		        else
		          cout<<"\n C is the oldest";
		        if(a<b && a<c)
		           cout<<"\n A is the youngest";
		        else if(b<c && b<a)
		           cout<<"\n B is the youngest";
		        else
		           cout<<"\n C is the youngest";
		        break;
		        }
		    
	    case 7: {
				int no;
	            cout<<"\n Enter the no:";
	            cin>>no;
	            if(no>0)
	              cout<<endl<<no;
	            else if(no<0)
	              no= -no;
	              cout<<endl<<no;
	            break;
	            }
	            
	    case 8: {
				int held,taken,percent;
	            cout<<"\n Enter the no of classes held";
	            cin>>held;
	            cout<<"\n Enter the no of classes taken";
	            cin>>taken;
	            percent=((held-taken)/held)*100;
	            cout<<endl<<percent;
	            if(percent<75)
	               cout<<"\n Not allowed to give exams";
	            else
	               cout<<"\n Allowed to give exams";
	            break;
	        	}
	            
	    case 9: {
				char c;
	            cout<<"\n Do you have a medical cause? (Y/N)";
	            cin>>c;
	            if(c=='Y')
	            	cout<<"\n Allowed to give exams";
	            else 
	                cout<<"\n Not Allowed to give exams";
	            break;
	            }
	             
	    case 10: {
				 char ch;
	             cin>>ch;
	             if((int)ch>96 && ch<123)
	                cout<<"\n Lowercase";
	             else
	               cout<<"\n Uppercase";
	             break;
	             }
	             
	    default: cout<<"\n Invalid Question";
	}
	return 0;
}
