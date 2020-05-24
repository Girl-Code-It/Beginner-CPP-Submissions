/*
To find nth term of a pascal triangle we use following formula.
Pascal triangle formula k = ___n!___
                            k!(n-k!)
Where n is row number and k is term of that row.
*/
#include<iostream>
using namespace std;
int main()
{
    int rows, coef=1, space, i, j;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=0; i<rows; i++)
    {
        for (space=1; space <= rows-i; space++)
            cout<<"  ";
        for (j=0; j<=i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef=coef*(i-j+1)/j;
            cout<<" "<<coef<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}
/*
for i=1
    j=0 coef=1
    j=1 coef=1
for i=2
    j=0 coef=1
    j=1 coef=2
    j=2 coef=2/2=1
for i=3
    j=0 coef=1
    j=1 coef=3
    j=2 coef=(3*2)/2=3
    j=3 coef=3/3=1
*/
