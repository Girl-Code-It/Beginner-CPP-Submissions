#include <iostream>
using namespace std;
int main()
{
    int a[3];
    for(int i=0;i<3;i++)
        cin>>a[i];
    int max=a[0];
    for (int j=0;j<3;j++)
        if(a[j]>max)
         {max=a[j];}
        cout<<"oldest:"<<max<<endl;
     int min=a[0];
     for (int k=0;k<3;k++)
            if(a[k]<min)
     {
         min=a[k];
     }
     cout<<"youngest"<<min;
     return 0;
}
