// PRINT ALL THE ELEEMNTS OF A 2D ARRAY

#include<iostream>
using namespace std;

 int main ()
 {
     int arr[2][3];
     cout<<"ENTER THE ELEMENTS OF THE ARRAY\n";
     for (int i =0;i<2;i++)
     {
         for (int j =0;j<3;j++)
            {
                cin>>arr[i][j];

            }

     }
     cout<<"THE ELEMENTS OF THE 2-D ARRAY ARE AS FOLLOWS :\n";

     for (int i =0;i<2;i++)
     {
         for (int j =0;j<3;j++)
            {
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
     }

     return 0;
 }
