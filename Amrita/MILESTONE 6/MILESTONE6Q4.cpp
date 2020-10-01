#include<iostream>
using namespace std;
int main ()
{
    int uplimit,num=1,i,sum=0, fact=1;;
    cout<<"ENTER THE UPPER LIMIT \n";
    cin>>uplimit;
    cout<<"the strong number are as follows \n";
    while (num<=uplimit)


        {
            int n=num;
            while (n>0)
            {
             int l_digit=n%10;
            fact=1;
            for (int j=1;j<=l_digit;j++)
            {
                fact*=j;

            }
            sum+=fact;
            n=n/10;



        }
        if (sum==num)
                {
                    cout<<num<<endl;

                }
                num++;
                sum=0;
       }
       return 0;
}
