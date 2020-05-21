#include<iostream>
#include<stdio.h>
using namespace std;
int taxcalc(int,int);
int main()
{
    int gs,ts,t;
    cout<<"Enter gross salary and total savings : "<<endl;
    cin>>gs>>ts;
    t=taxcalc(gs,ts);
    cout<<"Tax = "<<t;
    return 0;
}
int taxcalc(int gs,int ts)
{
    int ti;
    float tax
    if(ts<100000)
    {
        ti=gs-ts;
        if(ti>=100000&&ti<200000)
        {
            tax=0.1*ti;
        }
        else
            if(ti>=200000&&ti<500000)
        {
            tax=0.1*200000+0.2*(ti-200000);
        }
        else if(ti>=500000)
        {
            tax=0.1*200000+0.2*300000+0.3*(ti-500000);
        }
    }
    else
        if(ts>100000)
    {
        ti=gs-100000;
         if(ti>=100000&&ti<200000)
        {
            tax=0.1*ti;
        }
        else
            if(ti>=200000&&ti<500000)
        {
            tax=0.1*200000+0.2*(ti-200000);
        }
        else if(ti>=500000)
        {
            tax=0.1*200000+0.2*300000+0.3*(ti-500000);
        }

    }
        return tax;

}
