#include<iostream>
#include <math.h>
 using namespace std;
 int main()
 {
     long int num, i, ld=0, sum=0, j=0;
     cout<<"enter a binary number : ";
     cin>>num;
     cout<<"\ndecimal number : ";
     for(i=num; i>0; i=i/10)
     {
         ld=i%10;
         sum+=ld*pow(2,j);
         j++;
     }
     cout<<sum;
 }
