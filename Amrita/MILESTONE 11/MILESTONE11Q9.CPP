// PROGRAM TO PRINT THE SUM , AVERAGE OF ALL NUMBERS ALONG WITH LARGEST AND SMALLEST NUMBER

#include<iostream>
using namespace std;

int main()
{
    int arr[10],sum=0,max_num=arr[0],min_num=arr[3];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY \n";
    for (int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if (arr[i]>max_num)
        {
            max_num=arr[i];
        }
        if (arr[i]<min_num)
        {
            min_num=arr[i];
        }


    }
    cout<<"THE SUM ADD AVERAGE OF ALL THE ELEMNTS ARE \n"<<sum<<"\t"<<(sum/10)<<endl;
    cout<<max_num<<"\t"<<min_num;
    return 0;
}

