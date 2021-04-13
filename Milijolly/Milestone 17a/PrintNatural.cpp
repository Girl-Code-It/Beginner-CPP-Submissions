// code to print numbers from 1 to n
#include <iostream>
 using namespace std;
void pnatural(int n)
{
    if(n==1)
     {   
         cout<<n<<" ";
         return ;
     }
 
   pnatural(n-1);
   cout<<n<<" ";
}

int main(void){
    // Here your code !
    pnatural(50);
}
