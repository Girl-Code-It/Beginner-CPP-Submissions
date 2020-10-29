#include <iostream>
using namespace std;
int main()
{
    long long int num,i=0 ,fd=0 , ld=0, rev=0,swap=0,temp;
    cout<<"enter a number : "<< num;
    cin>> num;
    temp=num;
    ld=num%10;     //define ld before entering the loop.
    while (num>10)
    {
        num=num/10;
    }
      fd=num;
    num=temp/10;
    while(num>10)
    {
    rev=(rev*10)+(num%10);
    num=num/10;
    }
    swap=ld;
    while(rev>0)
    {
     swap=(swap*10)+(rev%10);
     rev=rev/10;
    }
    swap=(swap*10)+fd;
    cout<<"number after swapping first and last digit is:"<<swap<<endl;
    return 0;
}
