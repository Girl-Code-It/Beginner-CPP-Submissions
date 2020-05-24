#include <iostream>
using namespace std;
int max(int x, int y);
int min(int x, int y);

int main()
{
    int x, y;
    cout<<"input first number : ";
    cin>>x;
    cout<<"input second number : ";
    cin>>y;
    cout<<"maximum : "<<max(x, y)<<endl;
    cout<<"minimum : "<<min(x, y)<<endl;
}
int max(int x, int y)
{
    return( (x>y)?x:y );     //if(x>y) return x; else return y;
}
int min(int x, int y)
{
    return( (x<y)?x:y );     //if(x<y) return x; else return y;
}
