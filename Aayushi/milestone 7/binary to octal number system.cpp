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
     cout<<"enter a binary number : ";
     cin>>num;
     cout<<"octal number : ";
     for(i=num; i>0; i=i/1000)
     {
         ld=i%1000;
         rev=rev*1000+ld;

     }
     //cout<<rev<<"       ";
     for(j=rev; j>0; j=j/1000)
     {
         revld=j%1000;
         if( revld==000 || revld==00 || revld==0 )
            cout<<"0";
         else if (revld==001 || revld==01 || revld==1)
            cout<<"1";
         else if (revld==010 || revld==10)
            cout<<"2";
         else if (revld==011 || revld==11)
            cout<<"3";
         else if (revld==100)
            cout<<"4";
         else if (revld==101)
            cout<<"5";
         else if (revld==110)
            cout<<"6";
         else if (revld==111)
            cout<<"7";
         else
            {cout<<"wrong input...";
            break;}

     }

 }
