

#include<iostream>
using namespace std;
int main() {

    int output[100000],t;               // it will store only vowels;
        char s[100000];  //string

            cin>>t;
    while(t--){

    cin>>s;
    int countR=0,countF=0,k=0;                //this is all the counts countF when is ascending order ,countR when is descending order and k is index of output string
   for(int i=0;s[i] != '\0';i++){
    if(s[i] =='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        output[k] = s[i] - 97;            //it will help us store vowels in integer form so we can tell which one is bigger
      k++;
   }
   }

     for(int j=0;j<k-1;j++){
       if(output[j]<output[j+1])           //if string of output is ascending order
       countF++;
       else if(output[j]>output[j+1])         //if string of output is descending order
       countR++;
       else{
       countF++;
       countR++;
     }
    }

    if(countF==k-1 || k==0)                // if in ascending order it is equal to length of output-1
        cout<<"Good";
    else if(countR==k-1)                   // if in descending order it is equal to length of output-1
         cout<<"Worst";
    else
        cout<<"Bad";

    cout<<endl;
    }
    return 0;
}
