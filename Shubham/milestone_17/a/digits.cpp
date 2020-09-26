#include<iostream>

using namespace std;
int digits=0;
int count(int n)
{
        
        if(n == 0)
                return 0;
        count(n/10); 
        digits++;  
        return digits;  
}

int main()
{
        int n;
        cin >> n;

        cout << count(n) << endl;
}
