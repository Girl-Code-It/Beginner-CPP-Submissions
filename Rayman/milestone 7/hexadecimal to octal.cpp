#include<iostream>
 using namespace std;
 int main()
 {
    char hex[17];                                            //  hex[16]=\0. it has 17 elements from 0 to 16.
     long long int i, binary=0, bin=0, rev=0;                        // declare i under integer data type .
     int n, ld=0, revld=0, j;
     cout<<"enter a hexadecimal number : ";
     cin>>hex;
     cout<<"binary number : ";
     for(i=0; hex[i]!='\0'; i++)
     {
         if( hex[i]=='0' )
            binary=0;
         else if ( hex[i]=='1' )
            binary=1;
         else if (hex[i]=='2' )
            binary=10;
         else if (hex[i]=='3' )
            binary=11;
         else if (hex[i]=='4')
            binary=100;
         else if (hex[i]=='5' )
            binary=101;
         else if (hex[i]=='6')
            binary=110;
         else if (hex[i]=='7')
            binary=111;
         else if (hex[i]=='8')
            binary=1000;
         else if (hex[i]=='9')
            binary=1001;
         else if (hex[i]=='A' || hex[i]=='a')
            binary=1010;
         else if (hex[i]=='B' || hex[i]=='b')
            binary=1011;
         else if (hex[i]=='C' || hex[i]=='c')
            binary=1100;
         else if (hex[i]=='D' || hex[i]=='c')
            binary=1101;
         else if (hex[i]=='E' || hex[i]=='d')
            binary=1110;
        else if (hex[i]=='F' || hex[i]=='f')
            binary=1111;
         else
            {cout<<"invalid input...";
            break;}
            bin=bin*10000 + binary;
       }
     cout<<bin;
     cout<<"\noctal number : ";
      for(n=bin; n>0; n=n/1000)
     {
         ld=n%1000;
         rev=rev*1000+ld;

     }
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
