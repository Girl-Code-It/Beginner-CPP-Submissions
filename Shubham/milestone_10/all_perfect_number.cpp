#include<cstdlib>
#include<iostream>

using namespace std;

int isPerfect(int);

int main()
{

    //program to print all armstrong numbers between a given interval

    int start, i, end;

    cout << "Enter the lower and upper limit " <<endl;
    cin >> start >> end;

    for(i=start; i<=end; i++)
    {
        if(isPerfect(i) == 1)
            cout << i << "  ";
    }

}

int isPerfect(int num)
{
    int i, sum=0;

    for(i=1; i<num; i++)
    {
        if(num%i==0)
            sum += i;
    }
    if(sum == num)
        return 1;
    else    
        return 0;
}
