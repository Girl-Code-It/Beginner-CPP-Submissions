// PROGRAM TO PRINT ALL PRIME nBER 1 TO n
#include<iostream>
using namespace std;
int main ()
{
    int n;
    int count=0,sum=0 ;
    cout<<"ENTER THE NUMBER UPTO WHICH YOU WANT TO PRINT THE PRIME NUMBERS \n";
    cin>>n;

cout <<"THE PRIME NUMBERS ARE  \n";

   for (int j=2;j<n;j++)
   {
      count=0;
       for (int i=2; i<j;i++)
    {

        if (j%i==0)
           {

               count =1;
               break;
           }
    }
    if (count==0)
    {


        cout<<j<<endl;
    }
}


}
