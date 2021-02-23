/*

Print 2D array in spiral order

input:

1 2 3
4 5 6 
7 8 9

output:

1 2 3 6 9 8 7 4 1 2 5

*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter N: "; cin>>num;
    int arr[num][num];

    cout<<"Enter the matrix:"<<endl;
    for(int i = 0; i < num; i++)
    for(int j = 0; j < num; j++)
    cin>>arr[i][j];

    int r=0;int c=0;int n=1;int s=num*num;
    int min=0; int max=num-1;

    while(n<=s)
        {   
            if(r==min && c==min){
                for(c=c;c<=max;c++)
                {cout<<arr[r][c]<<" ";n++;}
            c--; }
            if(r==min && c== max){
                for(r+=1;r<=max;r++)
                {cout<<arr[r][c]<<" ";;n++;}
            r--;}
            if(r==max && c== max){
                for(c-=1;c>=min;c--)
                {cout<<arr[r][c]<<" ";n++;}
            c++;}
            if(r==max && c== min){
                for(r-=1;r>min;r--)
                {cout<<arr[r][c]<<" ";n++;}
            r++;c++;}
            min++;max--;
         }
    return 0;
}