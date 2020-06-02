#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, n=1, k;
    char c=65;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=0; i<rows; i++)
    {
        n=1;
        c=65;
        for (j=1; j<=rows; j++)
        {
            if(j>=rows-i && j<=rows+i)
            {
                if(i%2==0)                   //for even rows
                {
                    cout<<c<<" ";
                    c++;
                }
                else                         //for odd rows
                {
                    cout<<n<<" ";
                    n++;
                }
            }
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
