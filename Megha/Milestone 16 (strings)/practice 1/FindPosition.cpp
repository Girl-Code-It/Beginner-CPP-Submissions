



#include <iostream>
using namespace std;
int main() {
    char str1[80], str2[80];
    cout<<"Enter the first string"<<endl;
    cin.getline(str1,80);
    
    cout<<"Enter the second string"<<endl;
    cin.getline(str2,80);
    
     int i=0;
    for(i=0;str2[i] != '\0';i++);

    int j, k;

    for(j = 0, k = 0; str1[j] != '\0' && str2[k] != '\0';j++)
    {
        if(str1[j] == str2[k])
        {
        k++;
        }
        else{
        k=0;
        }
    }

    if(k == i)
        cout<<"Substring found at position "<< j - k + 1;
    else
    cout<<"Substring not found";
    
    return 0;

}
