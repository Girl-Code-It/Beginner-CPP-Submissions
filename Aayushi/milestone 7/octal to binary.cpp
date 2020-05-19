/*
 *Binary Number System:
 *Binary number system is a base 2 number system.
 *Binary number system uses only 2 symbols to represent all its numbers i.e. 0 and 1.
 *Octal Number System:
 *Octal number system is a base 8 number system.
 *Octal number system uses 8 symbols to represent all its numbers i.e. 0 1 2 3 4 5 6 7.
 Binary	Octal
 000 	0
 001 	1
 010 	2
 011	3
 100 	4
 101 	5
 110 	6
 111 	7
 */
 #include<iostream>
 using namespace std;
 int main()
 {
     int num, i, ld=0, rev=0, revld=0, j;
     cout<<"enter a octal number : ";
     cin>>num;
     cout<<"\nbinary number : ";
     for(i=num; i>0; i=i/10)
     {
         ld=i%10;
         rev=rev*10+ld;

     }
     //cout<<rev<<"       ";
     for(j=rev; j>0; j=j/10)
     {
         revld=j%10;
         if( revld==0 )
            cout<<"000";
         else if (revld==1)
            cout<<"001";
         else if (revld==2)
            cout<<"010";
         else if (revld==3)
            cout<<"011";
         else if (revld==4)
            cout<<"100";
         else if (revld==5)
            cout<<"101";
         else if (revld==6)
            cout<<"110";
         else if (revld==7)
            cout<<"111";
         else
            {cout<<"wrong input...";
            break;}
     }
 }
