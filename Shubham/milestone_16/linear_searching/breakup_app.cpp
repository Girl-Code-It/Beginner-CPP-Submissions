#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
        int N;
        cin >> N;
        cin.ignore();
        string s;
        int nineteen=0, twenty=0, other=0;
        for(int i=0; i<N; i++)
        {
                getline(cin, s);
                for(int j=0; j<s.length(); j++)
                {
                        if(s[j] == '1' && s[j+1] == '9')
                        {
                                if(s[0] == 'M')
                                        nineteen += 1;
                                else
                                        nineteen += 2;
                        }
                        else if(s[j] == '2' && s[j+1]== '0')
                        {
                                if(s[0] == 'M')
                                        twenty += 1;
                                else   
                                        twenty += 2;
                        }
                         else if((s[j] == '2') && (s[j+1] > '0' && s[j+1] < '9'))
                        {
                                if(s[0] == 'M')
                                        other += 1;
                                else   
                                        other += 2;
                        }
                        

                }

                     
        }
        if(nineteen > other || twenty > other)
                cout << "Date\n";

        else if(nineteen == twenty)
                cout << "No Date\n";
        
        else
                cout << "No Date\n";


}
