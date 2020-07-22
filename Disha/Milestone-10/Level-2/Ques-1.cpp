using namespace std;
#include<iostream>
int print(int num,int y=1)
{
    cout<<num<<"*"<<y<<"="<<num*y<<endl;
    if(y!=10)
    {
        y++;
        print(num,y);
    }

}
int main()
{
    print(15);
    return 0;
}
