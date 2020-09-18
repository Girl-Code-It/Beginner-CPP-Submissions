#include<iostream>
#include<cstdio>


using namespace std;

int main()
{
    //prgoram to check if a number is strong or not

    int num, fact=1, sum=0, i, temp, lastDigit;

    cout << "Enter a number to check Strong:  ";
    cin >> num;
    temp = num;

    while(temp != 0)
   {
        lastDigit = temp%10;
        fact = 1;
        for(i=1; i<=lastDigit; i++)
            fact = fact * i;
        sum += fact;
        temp /= 10;
   }
    cout << sum << endl;
    if(sum == num)
        cout << "It's  a Strong Number" <<endl;
    else
        cout <<"It's  not a Strong Number" << endl;

}

