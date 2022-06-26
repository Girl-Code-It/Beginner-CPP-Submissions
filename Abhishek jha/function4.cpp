#include<iostream>
using namespace std;
void perfectnum()
{
    
    for (int i = 1; i <= 100; i++)
    {
        int n=0;
        for (int j = 1; j != i; j++)
        {
            if (i%j == 0)
            {
                n=n+j;
            }
            
        }
    if (n==i)
        {
            cout<<n<<" is perfect number"<<endl;
        }
        
        
    }
   
   };
int main()
{
    perfectnum();
    
}
