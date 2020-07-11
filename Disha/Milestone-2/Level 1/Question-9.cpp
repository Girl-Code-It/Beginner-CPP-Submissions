//Modify the question8 to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.
using namespace std;
#include<iostream>
int main()
{
    int total,attend;
    cout<<"\n Enter the total number of classes held :";
    cin>>total;

    cout<<"\n Enter number of classes attended by the student :";
    cin>>attend;

    float per=(attend*100)/total;
    cout<<"\n Percentage of class attended :"<<per<<"%";
    if(per<75)
    {
        char ans;
        cout<<"\n Do you have any medical problem? ";
        cin>>ans;
        if(ans=='Y' || ans=='Yes')
        {
            cout<<"\n Ok,you are eligible to sit in exam \n";
        }
        else {
            cout<<"\n Poor attendance,You are not eligible to sit in the exam \n ";
        }

    }
    else if(per>=75){
        cout<<"\n Good,You are eligible to sit in the exam \n ";
    }
    return 0;
}
