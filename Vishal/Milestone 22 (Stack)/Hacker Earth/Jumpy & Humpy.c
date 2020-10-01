#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

int stack[1000001], top = 0;
ll res[1000001];

void push(int num)
{
    stack[top++] = num;
}

int pop()
{
    int z = stack[top-1];
    top--;
    return z;
}

int Top()
{
    return stack[top-1];
}

ll process(int* arr, int size)
{
    ll max = arr[size-1];
    res[size-1] = arr[size-1];
    for (int i = size - 1; i >= 0; i--)
    {
        while(arr[Top()] < arr[i] && top)
        {
            pop();
        }
        if (arr[i] < arr[Top()] && top)
        {
            if(!res[Top()])
                res[i] = arr[i]^arr[Top()];
            
            else
                res[i] = arr[i]^res[Top()];
            
            if(res[i] > max)
                max = res[i];
        }
        push(i);
    }

   /*
    for(int i = 0; i < size; i++)
        printf("%lld ", res[i]);
        
    printf("\n");
    */
    return max;
}

int main()
{
    int size;
    scanf("%d",&size);
    int arr[1000001];

    for(int i = 0; i < size; i++)
        scanf("%d",&arr[i]);

    printf("%lld",process(arr, size));
    
    return 0;
}