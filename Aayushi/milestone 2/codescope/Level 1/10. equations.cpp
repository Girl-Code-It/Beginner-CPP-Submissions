#include <iostream>
using namespace std;
int main()
{
    int x=2, y=5, z=0;
    cout<<"if  x=2, y=5, z=0"<<endl;

        cout <<"x==2"<<endl;
            if (x==2)
                cout<<"true"<<endl;
            else
                cout<<"false"<<endl;

        cout <<"x!=5"<<endl;
            if (x!=5)
                cout<<"true"<<endl;
            else
                cout<<"false"<<endl;


        cout <<"x!=5 && y>=5"<<endl;
            if (x!=5 && y>=5)
                cout<<"true"<<endl;
            else
                cout<<"false"<<endl;


        cout <<"z!=0 || x==2"<<endl;
            if (z!=0 || x==2)
                cout<<"true"<<endl;
            else
                cout<<"false"<<endl;

        cout <<"x!=5 && y>=5"<<endl;
            if (x!=5 && y>=5)
                cout<<"true"<<endl;
            else
                cout<<"false"<<endl;

        cout <<"!(y<10)"<<endl;
            if (!(y<10))
                cout<<"true"<<endl;
            else
                cout<<"false"<<endl;

        return 0;
}
