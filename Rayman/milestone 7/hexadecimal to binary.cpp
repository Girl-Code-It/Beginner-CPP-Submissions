#include<iostream>
 using namespace std;
 int main()
 {
     char hex[17];                         //  hex[16]=\0. it has 17 elements from 0 to 16.
     int i;                                // declare i under integer data type .
     cout<<"enter a hexadecimal number : ";
     cin>>hex;
     cout<<"binary number : ";
     for(i=0; hex[i]!='\0'; i++)
     {
         if( hex[i]=='0' )
            cout<<"0000";
         else if ( hex[i]=='1' )
            cout<<"0001";
         else if (hex[i]=='2' )
            cout<<"0010";
         else if (hex[i]=='3' )
            cout<<"0011";
         else if (hex[i]=='4')
            cout<<"0100";
         else if (hex[i]=='5' )
            cout<<"0101";
         else if (hex[i]=='6')
            cout<<"0110";
         else if (hex[i]=='7')
            cout<<"0111";
         else if (hex[i]=='8')
            cout<<"1000";
         else if (hex[i]=='9')
            cout<<"1001";
         else if (hex[i]=='A' || hex[i]=='a')
            cout<<"1010";
         else if (hex[i]=='B' || hex[i]=='b')
            cout<<"1011";
         else if (hex[i]=='C' || hex[i]=='c')
            cout<<"1100";
         else if (hex[i]=='D' || hex[i]=='c')
            cout<<"1101";
         else if (hex[i]=='E' || hex[i]=='d')
            cout<<"1110";
        else if (hex[i]=='F' || hex[i]=='f')
            cout<<"1111";
         else
            {cout<<"wrong input...";
            break;}

     }

 }
