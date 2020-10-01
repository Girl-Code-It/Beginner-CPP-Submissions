#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
        int t;
        cin >> t;
        while(t--)
        {
                int num, flag =0;
                cin >> num;
                //counting digits in number
                int temp=num, size=0, arr[100];
                
                for(int i=0; temp != 0; i++)
                {
                     arr[i] = temp%10;
                     size++;
                     temp /= 10;   
                }
                if(num%21 == 0)
                {
                        cout << "The streak is broken!" << endl;
                        flag =1;
                }
                else
                {
                        for(int i=0; i<size; i++)
                        {
                                if(arr[i] == 1 && arr[i+1] == 2)
                                {
                                        cout << "The streak is broken!" << endl;
                                        flag =1;
                                        break;
                                }
                        }
                }
                if(flag ==0)
                        cout << "The streak lives still in our heart!"<< endl;

        }
}

