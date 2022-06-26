#include <iostream>
using namespace std;
int fibb(int n){
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fibb(n-1)+fibb(n-2);
    }
    

};
int main()
{
    cout<<fibb(5);
    return 0;
}