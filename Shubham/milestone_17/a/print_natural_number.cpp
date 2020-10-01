#include<iostream>

using namespace std;
//Q. Print first 50 natural numbers using recursion
void print(int n)
{
        if(n == 0)
        return;
        print(n-1);   
        cout << n << " ";
}       
int main()
{
        print(50);
        cout << endl;       
}
