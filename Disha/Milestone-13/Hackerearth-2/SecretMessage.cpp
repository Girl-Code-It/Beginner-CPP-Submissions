using namespace std;
#include<iostream>
#include<cctype>
int main()
{
    int t,num;
    long long n,k;
    string s;
    cin>>t;
    cin.ignore(256,'\n');
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        cin.ignore(256,'\n');
        getline(cin,s);
        for(int j=0;j<s.length();j++)
        {
            if((s[j]>=97 && s[j]<=122)|| (s[j]>=65 && s[j]<=90))
            {
                    num=s[j]+(k-(26*(k/26)));

                    if(isupper(s[j]) && num>90)
                        s[j]=(num-90)+64;

                    else if(islower(s[j]) && num>122)
                        s[j]=(num-122)+96;

                    else
                        s[j]=num;

            }
            else if(s[j]>=48 && s[j]<=57)
            {
               num=s[j]+(k-(10*(k/10)));

               if(num>57)
                s[j]=(num-57)+47;

               else
                s[j]=num;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
