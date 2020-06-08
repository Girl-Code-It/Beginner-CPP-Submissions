#include <iostream>
using namespace std;

int main()
{
    float noc,noa,perc;
    char ch;

    cout<<"\n Enter total no. of classes held: ";
    cin>>noc;
    cout<<"\n Enter total no. of classes attended: ";
    cin>>noa;
    perc=((noa/noc)*100);

    if(perc>=75)
        cout<<"\n Percentage of class attended: "<<perc<<"\n Hence allowed to sit in exam";
    else
        cout<<"\n Do you have a medical cause? (Y/N):";
        cin>>ch;

        if((ch=='y')||(ch=='Y'))
            cout<<"\n Percentage of class attended: "<<perc<<"\n Allowed to sit in exam due to medical cause.";
        else if((ch=='n')||(ch=='N'))
            cout<<"\n Percentage of class attended: "<<perc<<"\n Hence not allowed to sit in exam";
        else
            cout<<"\n invalid answer.";
}
