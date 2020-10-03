#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    int ar1[20],ar2[20],ar3[20];
    int h,i,j,k,l,x,fr,flg,rem,n1,n3;
    float rem1,n2,n4,dno;
    char octal_num[20];
    x=fr=flg=rem=0;
    rem1=0.0;
	cout << "\n\n Convert any octal number to a hexadecimal number:\n";
	cout << "------------------------------------------------------\n";
	cout << " Input any octal number: ";
	cin>> octal_num;

    for(i=0,j=0,k=0;i<strlen(octal_num);i++)
    {
        if(octal_num[i]=='.')
        {
            flg=1;
        }
        else if(flg==0)
            ar1[j++]=octal_num[i]-48;
        else if(flg==1)
            ar2[k++]=octal_num[i]-48;
    }
    x=j;
    fr=k;
    for(j=0,i=x-1;j<x;j++,i--)
    {
        rem = rem +(ar1[j] * pow(8,i));
    }
    for(k=0,i=1;k<fr;k++,i++)
    {
        rem1 = rem1 +(ar2[k] / pow(8,i));
    }
    rem1=rem+rem1;
    dno=rem1;
    n1=(int)dno;
    n2=dno-n1;

    i=0;
    while(n1!=0)
    {
        rem=n1 % 16;
        ar3[i] = rem;
        n1=n1 /16;
        i++;
    }
    j=0;
    while(n2!=0.0)
    {
        n2=n2 * 16;
        n3=(int)n2;
        n4=n2-n3;
        n2=n4;
        ar1[j]=n3;
        j++;
        if(j==4)
        {
            break;
        }
    }
    l=i;
    cout<<" The hexadecimal value of "<<octal_num<<" is: ";
    for(i=l-1;i>=0;i--)
    {
        if(ar3[i]==10)
           cout<<"A";
        else if(ar3[i]==11)
           cout<<"B";
        else if(ar3[i]==12)
           cout<<"C";
        else if(ar3[i]==13)
           cout<<"D";
        else if(ar3[i]==14)
           cout<<"E";
        else if(ar3[i]==15)
           cout<<"F";
        else
        cout<<ar3[i];
    }
    h=j;
    cout<<".";
    for(k=0;k<h;k++)
    {
        if(ar1[k]==10)
           cout<<"A";
        else if(ar1[k]==11)
           cout<<"B";
        else if(ar1[k]==12)
           cout<<"C";
        else if(ar1[k]==13)
           cout<<"D";
        else if(ar1[k]==14)
           cout<<"E";
        else if(ar1[k]==15)
           cout<<"F";
        else
        cout<<ar1[k];
    }
    cout<<endl;
}
