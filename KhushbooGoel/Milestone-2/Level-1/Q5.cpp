#include<iostream>
using namespace std;
int main()
{
    int a1 , a2 , a3 ;
    cout << "Enter age of 3 people: ";
    cin >> a1 >> a2 >> a3;
    a1>a2 ? (a1>a3 ? cout << "Person 1 is the oldest." : cout << "Person 3 is the oldest.") : (a2>a3 ? cout << "Person 2 is the oldest." : cout << "Person 3 is the oldest." );
    cout<<endl;
    a1<a2 ? (a1<a3 ? cout << "Person 1 is the youngest." : cout << "Person 3 is the youngest.") : (a2<a3 ? cout << "Person 2 is the youngest." : cout << "Person 3 is the youngest." );
    return 0;
}
