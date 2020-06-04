#include <iostream>
#include <math.h>
using namespace std;
main(){
    // ans 11
    // long long int x, first, last, digits;
    // cout<<"enter the no."<<endl;
    // cin>> x;
    // last = x%10;
    // cout<<"last digit is "<< last<<endl;
    // first = x;
    // digits = (int)log10(x);
    // first = x/ pow (10 , digits);
    // cout<<"first no. is "<<first<<endl;

    // ans 12
    //  long long int x, first, last, digits;
    // cout<<"enter the no."<<endl;
    // cin>> x;
    // last = x%10;
    // cout<<"last digit is "<< last<<endl;
    // first = x;
    // digits = (int)log10(x);
    // first = x/ pow (10 , digits);
    // cout<<"first no. is "<<first<<endl;
    // cout<<"*"<<endl;
    // cout<<"the sum of first and last digits of no. is "<< first + last;

    // ans 13
    //  long long int x, first, last, digits, y, z, q, ans;
    // cout<<"enter the no."<<endl;
    // cin>> x;
    // last = x%10;
    // cout<<"last digit is "<< last<<endl;
    // digits = (int)log10(x);
    // first = x/ pow (10 , digits);
    // cout<<"first digit is "<<first<<endl;
    // y= last * (int)pow(10, digits);
    // z= y + (x% + (int)pow(10, digits));
    // q= z- last;
    // ans=q+ first;
    // cout<<" the new no. is "<< ans<<endl;

    // ans 14
    // long long int x, sum=0;
    // cout<<"enter the no. "<<endl;
    // cin>> x;
    // while(x!= 0 )
    // {
    //     sum = sum + x%10;
    //     x= x/10;
    // }
    // cout<<"the sum of digits is "<<sum<<endl;

    // ans 15
    //  long long int x, y=1;
    // cout<<"enter the no. "<<endl;
    // cin>> x;
    // while(x!= 0 )
    // {
    //     y = y * (x%10);
    //     x= x/10;
    // }
    // cout<<"the product of digits is "<<y<<endl;

    // ans 16
    // int x, y, z;
    // cout<<"enter the no. whose reverse u need"<<endl;
    // cin>> x;
    // z= (int)log10(x); //to count digits
    // cout<<"the reverse no. is "<<endl;
    // while( x!= 0)
    // {
    //     y= x % 10;
    //     x= x/10;
    //     cout<<y;
    // }

    // ans 17
    // int x, n,y=0;
    // cout<<"enter the no. whose reverse u need"<<endl;
    // cin>> n;
    // x=n;
    // cout<<"the reverse no. is "<<endl;
    // while( x != 0)
    // {
    //    y =  (y * 10)  + ( x % 10 );
    //    x = x/10;
    // }
    // cout<<y<<endl;

    // cout<<"so is it palindrome? "<<endl;
    // if( n == y)
    // {
    //     cout<<"yes";
    // }
    // else{
    //     cout<<"no";
    // }

    // ans 18
    // program to calculate frequency of numbers in given input
    // long long int num, n;
    // int i, l,freq[10];
    // cout<<"enter the no. whose occurence frequency has to be calculated: "<<endl;
    // cin>> num;
    // for(i=0;i<10;i++){
    //     freq[i]=0;
    // }
    // n=num;
    // while( n!=0){
    // l = n%10;
    // n/= 10;
    // freq[l]++;
    // }
    // cout<<"the frequency of numbers are as follows: "<<endl;
    // for (i=0;i<10;i++){
    //     cout<<"frequency of "<<i<<" is "<<freq[i]<<endl;
    // }

    // ans 19
    //program to give digits in words
    // long long int num,n=0,x ;
    // int i, digits;
    // cout<<"enter the number you want to print in words: "<<endl;
    // cin>> x;
    // num=x;
    // digits = (int)log10(x);
    // //need to reverse the number
    // while ( num != 0){
    //     n =  ( n * 10) + (num % 10);
    //     num = num/10;
    // }
    // digits= digits - (int)log10(n);
    // cout<<"the reverse number is "<<n<<endl;
    // // now applying loop to add switch and write in words
    // while( n!= 0){
    //     switch( n % 10){
    //         case 0:
    //         cout<<"zero"<<endl;
    //         break;
    //         case 1:
    //         cout<<"one"<<endl;
    //         break;
    //         case 2:
    //         cout<<"two"<<endl;
    //         break;
    //         case 3:
    //         cout<<"three"<<endl;
    //         break;
    //         case 4:
    //         cout<<"four"<<endl;
    //         break;
    //         case 5:
    //         cout<<"five"<<endl;
    //         break;
    //         case 6:
    //         cout<<"six"<<endl;
    //         break;
    //         case 7:
    //         cout<<"seven"<<endl;
    //         break;
    //         case 8:
    //         cout<<"eight"<<endl;
    //         break;
    //         case 9:
    //         cout<<"nine"<<endl;
    //         break;

    //     }
    //     n = n/10;
    // }
    // while(digits){
    //     cout<<"zero"<<endl;
    //     digits--;
    // }
    

    // ans 20
    // int i;
    // char c;
    // cout<<"enter the number whose ascii value is to  be determined "<<endl;
    // cin>>c;
    // cout<<"ASCII value of character "<<c<<" is "<<(int)c<<endl;


    return 0;
}
