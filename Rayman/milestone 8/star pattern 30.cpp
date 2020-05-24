#include<iostream>
using namespace std;
int main()
{
    int num, i, j, n=num+1;
    cout<<"Enter number of | in the pattern : ";
    cin>>num;
    for (i=1; i<=3*num; i++)
    {
        for (j=1; j<=2*num-1; j++)
        {
            if(i<=num)
            {
                if(j>=2*num-i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
            else if(i<=2*num)
            {
                if(j<=i-num-1 || j>=i)
                {
                    cout<<"*";
                }
                else if (j==num)
                {
                    cout<<"|";
                }
                else
                {
                    cout<<" ";
                }
            }
            else                      //if i<=num*3
            {
                if(j<=3*num-i+1)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
        n--;
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, n=4;
    for (i=1; i<=9; i++)
    {
        for (j=1; j<=5; j++)
        {
            if((i<=4 && j<=5-i) || (i>=5 && j>5+n) || (j==2 && i>=4 && i<=5) || (j==4 && i>=5 && i<=6))
                cout<<" ";
            else if(j==3 && i>=4 && i<=6)
                cout<<"|";
            else
            {
                cout<<"*";
            }
        }
        cout<<"\n";
        n--;
    }
    return 0;
}
*/
