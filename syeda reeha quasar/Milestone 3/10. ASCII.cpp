#include <iostream>
using namespace std;
int main()
{
    int sn, en, i, j, ctr, r;
    cout << " Input the starting value for ASCII characters: ";
    cin >> sn;
    cout << " Input the ending value for ASCII characters: ";
    cin >> en;
	if (sn>255 || sn<0)
	sn=1;
	if(en<0 || en>255)
	en=255;
	cout << "The ASCII characters:"<<endl ;
    for (i = sn; i <=en; i++)
    {
        cout << i<<" --> "<<char(i)<<endl;
    }
}
