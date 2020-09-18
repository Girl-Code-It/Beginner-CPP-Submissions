#include<iostream>
#include<cstdlib>

using namespace std;
int sumExcept(int*, int, int);
int main()
{

        //1 case still pending , will look into it 

        int N;
        cin >> N;
        int arr[N], sum[N];
        for(int i=0; i<N; i++)
                cin >> arr[i];

        for(int i=0; i<N; i++)
        {
                sum[i] = sumExcept(arr, N, i);
        }
        // sort(sum, N);
        int min=sum[0] , max = sum[0];
        for(int i=0; i<N; i++)
        {
                if(sum[i] < min)
                        min = sum[i];
                
                if(sum[i] > max)
                        max = sum[i];
        }

        printf("%d %d", min, max);
}

int sumExcept(int* arr, int N, int x)
{
        int sum=0;
        for(int i=0; i<N; i++)
        {
                if(i!= x)
                        sum+= arr[i];
        }
        return sum;
}
