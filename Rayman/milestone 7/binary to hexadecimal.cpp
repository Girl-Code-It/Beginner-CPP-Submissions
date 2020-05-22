/*
Binary number system
Binary number system is a base 2 number system.
Binary number system uses only two symbols to represent all its values i.e. 0 and 1
Hexadecimal number system
Hexadecimal number system is base 16 number system.
Hexadecimal number system uses 16 symbols to represent all its values i.e. 0123456789ABCDEF
Decimal	Binary	Hexadecimal
0   	0000	0
1	    0001	1
2	    0010	2
3   	0011	3
4   	0100	4
5   	0101	5
6   	0110	6
7     	0111	7
8   	1000	8
9   	1001	9
10   	1010	A
11   	1011	B
12	    1100	C
13      1101	D
14	    1110	E
15	    1111    F
*/
#include<iostream>
 using namespace std;
 int main()
 {
     int num, i, ld=0, rev=0, revld=0, j;
     cout<<"enter a binary number : ";
     cin>>num;
     cout<<"\nhexadecimal number : ";
     for(i=num; i>0; i=i/10000)
     {
         ld=i%10000;
         rev=rev*10000+ld;

     }
     //cout<<rev<<"       ";
     for(j=rev; j>0; j=j/10000)
     {
         revld=j%10000;
         if( revld==0000 || revld==000 || revld==00 || revld==0 )
            cout<<"0";
         else if (revld==0001 || revld==001 || revld==01 || revld==1)
            cout<<"1";
         else if (revld==0010 || revld==010 || revld==10)
            cout<<"2";
         else if (revld==0011 || revld==11)
            cout<<"3";
         else if (revld==0100 || revld==100)
            cout<<"4";
         else if (revld==0101 || revld==101)
            cout<<"5";
         else if (revld==0110 || revld==110)
            cout<<"6";
         else if (revld==0111 || revld==111)
            cout<<"7";
         else if (revld==1000)
            cout<<"8";
         else if (revld==1001)
            cout<<"9";
         else if (revld==1010)
            cout<<"A";
         else if (revld==1011)
            cout<<"B";
         else if (revld==1100)
            cout<<"C";
         else if (revld==1101)
            cout<<"D";
         else if (revld==1110)
            cout<<"E";
        else if (revld==1111)
            cout<<"F";
         else
            {cout<<"wrong input...";
            break;}

     }

 }
