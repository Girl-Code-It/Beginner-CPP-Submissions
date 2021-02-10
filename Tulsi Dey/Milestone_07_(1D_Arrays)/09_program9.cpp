/*

Take an array of 10 elements. Split it into middle and store the elements in two 
dfferent arrays. 

E.g.-
INITIAL array :
58	24	13	15	63	9	8	81	1	78

After spliting :
58	24	13	15	63
9	8	81	1	78


*/
#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int arr[n], brr[n/2], crr[n/2];
    for(int i = 0; i < n; i++)
    cin>>arr[i];
    
    for(int i = 0; i < n/2; i++)
    brr[i] = arr[i];
    for(int i = 0; i < n/2; i++)
    crr[i] = arr[n/2 + i];

    for(int i = 0; i < n/2; i++)
    cout<<brr[i]<<" ";
    cout<<endl;
    for(int i = 0; i < n/2; i++)
    cout<<crr[i]<<" ";
    return 0;
}