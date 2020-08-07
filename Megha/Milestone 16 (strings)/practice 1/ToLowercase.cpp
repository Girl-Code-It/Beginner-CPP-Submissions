

#include <iostream>
using namespace std;
int main() {
    char str[80];
    cin.getline(str,80);
    int i;
    for(i=0;str[i] != '\0';i++)
    {
        str[i] = (str[i] >= 'A' && str[i]<='Z') ? (str[i]+32) : str[i];
    }
    cout<<str;
    return 0;
}
