// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     cout<<"Enter the binary number"<<endl;
//     int b[n],bn[n];
//     for(int x=0;x<n;x++){
//         cin>>b[x];
//         if(b[x] == 1){
//             bn[x] = 0;
//         }
//         else if(b[x] == 0){
//             bn[x] = 1;
//         }
//         else{
//             cout<<"Invalid Input";
//             break;
//         }
//     }
//     for(int x=0;x<n;x++){
//         cout<<bn[x];
//     }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

// int main(){
//     int n;
//     cout<<"enter the size of array"<<endl;
//     cin>>n;
//     cout<<"Enter the binary number"<<endl;
//     int b[n],bn[n];
//     for(int x=0;x<n;x++){
//         cin>>b[x];
//         if(b[x] == 1){
//             bn[x] = 0;
//         }
//         else if(b[x] == 0){
//             bn[x] = 1;
//         }
//         else{
//             cout<<"Invalid Input";
//             break;
//         }
//     }
//     int(carry) = 1;
//     for(int x=0;x<n;x++){
//         if(bn[x] == 1 && carry == 1){
//             bn[x] = 0;
//         }
//         else if(bn[x]== 0 && carry == 1){
//             bn[x] = 1;
//             carry = 0;
//         }
//         else{
//         }
//         cout<<bn[x];
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     int oc[] = {0,1,10,11,100,101,110,111};
//     cout<<"enter binary number:"<<endl;
//     string b;
//     cin>>b;
//     int str = stoi(b);
//     int place = 1 , octal = 0,d;
//     while (str !=0){
//         d = str%1000;
//         for(int i=0;i<8;i++){
//             if (oc[i] == d){
//                 octal = (i*place) + octal;
//                 break;
//             }
//         }
//         str /= 1000;
//         place *= 10;
//     }
//     cout<<octal;
//     return 0;
// }

// #include <iostream>
// #include <string>
// #include<math.h>
// using namespace std;
// int main(){
//     cout<<"enter binary number:"<<endl;
//     string b;
//     cin>>b;
//     int str = stoi(b);
//     int decimal = 0,i=0;
//     while(str != 0){
//         decimal += (str%10)*pow(2,i);
//         str /= 10;
//         i+= 1;
//     }
//     cout<<decimal;
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
int main(){
    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
    cout<<"enter binary number:"<<endl;
    string b,hex;
    cin>>b;
    int str = stoi(b);
    int temp;
    while(str != 0){
        temp = str %10000;
        for(int i=0;i<16;i++){
            if(hexConstant[i] == temp){
                if(i<10){
                    hex += char(i+48);
                    break;
                }
                else{
                    hex += char(i + 55);
                    break;
                }
            }
        }
        str /= 10000;
    }
    cout<<hex;
    return 0;
}