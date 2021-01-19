#include<iostream>
using namespace std;
int main()
{
    int arr[4][6];
    int i,j;
    cout<<"Insertion of Array: \n";
    for(i=0;i<4;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    int row_multip[4];
    for(i=0;i<4;i++)
    {   row_multip[i]=1;
        for(j=0;j<6;j++)
        {
            row_multip[i]=row_multip[i]*arr[i][j];
        }
        cout<<"Multiplication of row "<<i<<" is: "<<row_multip[i]<<"\n";
    }
}
