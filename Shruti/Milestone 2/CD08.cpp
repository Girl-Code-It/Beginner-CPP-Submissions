#include <iostream>
using namespace std;

int main()
{
    float noc,noa,perc;

    cout<<"\n Enter total no. of classes held: ";
    cin>>noc;
    cout<<"\n Enter total no. of classes attended: ";
    cin>>noa;
    perc=((noa/noc)*100);

    if(perc>=75)
        cout<<"\n percentage of class attended: "<<perc<<"\n Hence allowed to sit in exam";
    else
        cout<<"\n percentage of class attended: "<<perc<<"\n Hence not allowed to sit in exam";

}
