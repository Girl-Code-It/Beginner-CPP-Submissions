#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
// ans 21
// to find exponential power
// int power ,i, base, ans=1;
// cout<<"enter the base number " << endl;
// cin>>base;
// cout<<"enter the power / exponential no. " << endl;
// cin>>power;
// for(i=1;i<=power;i++){
//     ans = ans * base;
// }
// cout<<base <<" ^ "<<power<<" = "<<ans;

//ans 22
//to display factors
// int a, i,x;
// cout<<"enter the number whose factors are to be calculated" <<endl;
// cin>>a;
// cout<<"the factors are "<<endl;
// for(i=1;i<=a;i++){
// if(a % i == 0){
//     cout<<i<<endl;
// }
// }

// ans 23
//to find factorial of a number
// int a,i,x=1;
// cout<<"enter the number whose factorial is needed to be calculated "<<endl;
// cin>>a;
// for(i=1;i<=a;i++){
//     x = x * i;
// }
// cout<<"the value of factorial is "<<x;

// ans 24
//to find hcf of of 2 numbers
// int y, x, i, min;
// cout<<"enter the numbers whose hcf is required"<<endl;
// cout<<"enter no. 1"<<endl;
// cin>>x;
// cout<<"enter no. 2"<<endl;
// cin>>y;
// min = (x<y) ? x : y;
// for(i=1;i<=min;i++){
//     if(x % i == 0 && y% i == 0){
//         cout<<"hcf is "<<i;
//     }
// }

// ans 25
//to find lcm of of 2 numbers
// int y, x, i, max, lcm;
// cout<<"enter the numbers whose lcm is required"<<endl;
// cout<<"enter no. 1"<<endl;
// cin>>x;
// cout<<"enter no. 2"<<endl;
// cin>>y;
// max = (x>y) ? x : y;
// i= max;
// while(1){
//     if(i % x == 0 && i % y == 0){
//         lcm = i;
//         break;
//     }
//     i= i+max;
// }
// cout<<"the lcm is "<<lcm;

// ans 26
//prime no.
// int i,x,p;
// p=1;
// cout<<"enter the no.     "<<endl;
// cin>>x;
// for(i=2;i<=x/2;i++){
//     if(x%i == 0){
//         p=0;
//         break;
//     }
// }
// if(p=1){
//     cout<<"no. is prime";
// }
// else{
//     cout<<"no. is composite";
// }

// ans 27
//prime no. from 1-n
// int i,x,j,p;
// p=1;
// cout<<"enter no. to check prime or not"<<endl;
// cin>>x;
// for(i=2;i<=sqrt(x);i++){
//     if(x % i == 0){
//         p=0;
//         break;
//     }
// }
// if(p==1){
//     cout<<"prime"<<endl;
// }
// else {
//     cout<<"composite"<<endl;
// }

//ans 27
//prime no. from 1-n
// int i,x,j,p;
// cout<<"enter the no. upto which prime numbers are required"<<endl;
// cin>>x;
// for(j=2;j<=x;j++){
//     p=1;
//     for(i=2;i<=sqrt(j);i++){
//         if(j % i == 0 )
//         {p=0;
//         break;
//         }
//     }
//     if(p==1){
//         cout<<j<<endl;
//     }
// }

// ans 28
// to print the sum of prime numbers from 1 to n
// int i,x,j,p,sum=0;
// cout<<"enter the no. upto which prime numbers are required"<<endl;
// cin>>x;
// for(j=2;j<=x;j++){
//     p=1;
//     for(i=2;i<=sqrt(j);i++){
//         if(j % i == 0 )
//         {p=0;
//         break;
//         }
//     }
//     if(p==1){
//         cout<<j<<endl;
//         sum = sum + j;
//     }
// }
// cout<<"the sum of  prime numbers is = "<<sum<<endl;

//ans 29
//to find all the prime factors of a number
// int x,i,j,p=0;
// cout<<"enter the number for which prime numbers are to be calculated"<<endl;
// cin>>x;
// for(i=2;i<=x;i++){
//     for(j=2;j<=sqrt(i);j++){
//         if(i%j == 0){
//             p=1;
//             break;
//         }
//     }
//     if(p==0){
//     cout<<"prime factors : "<<i<<endl;
//     }
// }

// ans 30
//to check whether its an armstrong number or not
// sum of( digits to the power no. of digits)
// int i,lastdigit,x,y,sum=0,digits;
// cout<<"enter the number you have to check whether is an armstrong number or not"<<endl;
// cin>>x;
// y=x;
// digits = (int)log10(y) + 1;
// while(y>0){
//     lastdigit = y % 10;
//     sum = sum + (round)(pow(lastdigit,digits));
//     y = y/10;
// }
// if(x == sum){
//     cout<<"armstrong number"<<endl;
// }
// else {
//     cout<<"not an armstrong number"<<endl;
// }

// ans 31
// to print the armstrong numbers in a given range
// int i, lastdigit, digits, x1, x2, y,sum;
// cout<<"enter the lower limit"<<endl;
// cin>>x1;
// cout<<"enter the upper limit"<<endl;
// cin>>x2;
// for(i=x1;i<=x2;i++){
//     sum = 0;
//     y=i;
//     digits = (int)log10(y) + 1;
//     while( y != 0){
//         lastdigit = y % 10;
//         sum = sum + ceil(pow(lastdigit,digits));
//         y = y/10;
//     }
//     if (i == sum){
//        cout<<i<<endl;
//     }
// }

// ans 32
// to check whether no. is a perfect no. or not
// sum of sum of their divisors
// int x,i,y,sum=0;
// cout<<"enter the number to check pefect or not"<<endl;;
// cin>>x;
// y=x;
// for(i=1;i<y;i++){
//     if( y % i == 0){
//         sum = sum + i;
//     }
// }
// if(sum == x){
//     cout<<"perfect number";
// }
// else{
//     cout<<"not a perfect number";
// }

// ans 33
// to print all the perfect numbers between 1 to n
// int x,i,j,end,sum;
// cout<<"enter the number upto which perfect nubers are required";
// cin>>x;
// end = x;
// for(i=1;i<=end;i++){
//     sum=0;
//     for(j=1;j<i;j++){
//         if(i % j == 0){
//             sum = sum + j;
//         }
//     }
//     if( sum == i){
//         cout<<i <<endl;
//     }
// }

// ans 34
//to check whether a number is a strong number or not
//sum of factorial of digits
// int x,y,fac,sum,lastdigit,i;
// cout<<"enter the nuber which you have to check is strong or not"<<endl;
// cin>>x;
// sum = 0;
// y = x;
// while(y>0){
//     lastdigit = y % 10;
//     fac = 1;
//     for(i=1;i<=lastdigit;i++){
//         fac = fac * i;
//     }
//     sum = sum + fac;
//     y = y/10;
// }
// if(sum == x){
//     cout<<"strong number";
// }
// else{
//     cout<<"not a strong number";
// }

// ans 35
//to print all strong numbers from 1 to n
// int x,y,j,sum,fac,lastdigit,i;
// cout<< "enter the nuber upto which strong numbers are required"<<endl;
// cin>>x;
// for(i=1;i<=x;i++){
//     y = i;
//     sum= 0;
//     while( y > 0){
//     lastdigit = y%10;
//     fac=1;
//     for(j=1;j<=lastdigit;j++){
//         fac = fac * j;
//     }
//     sum = sum + fac;
//     y = y/10;
//     }
//     if( sum == i){
//         cout<<i<<endl;
//     }
// }

// ans 36
// to print fibonacci series upto n terms
// int x,i,a,b,c;
// cout<<"enter no. upto which fibonacci series is required"<<endl;
// cin>>x;
// a= 0;
// b=1;
// c=0;
// cout<<"fabonacci seies is:"<<endl;
// for(i=1;i<=x;i++){
//     cout<<c<<endl;
//     a = b;
//     b=c;
//     c = a+b;
// }

//to print fabonacci series in a given range (problem)
// int x1,x2,i,a,b,c;
// cout<<"enter the starting point"<<endl;
// cin>>x1;
// cout<<"enter the endpoint"<<endl;
// cin>>x2;
// a=0;
// b=1;
// c=0;
// for(i=x1;i<=x2;i++){
//     cout<<c<<endl;
//     a = b;
//     b=c;
//     c = a+b;
// }

// ans 37
// to print complement of entered binary number

int n,x,e = 0;
cout<<"enter the size you want for a given binary number"<<endl;
cin>>n;
int binary[n],bnew[n];
cout<<"enter the binary number"<<endl;
for(int i = 0; i < n; i++){
    cin >> binary[i];
}

for(x=0;x<n;x++){
    if(binary[x] == 0){
        bnew[x] = 1;
    }
    else if(binary[x] == 1){
        bnew[x] = 0;
    }
    else{
        e = 1;
        break;
    }
}
if (e != 1){
    cout<<"complement of given no  is ";
    for(int i = 0; i < n; i++)
        cout << bnew[i];
}

else{
    cout<<"invalid input";
}

// ans 38 (problem)
// to find 2's component of given binary number
// int n,x,e=0,carry=1;
// cout<<"enter the size of binary number"<<endl;
// cin>>n;
// int binary[n],sec[n],sec1[n];
// cout<<"enter the binary number"<<endl;
// for(int i=0;i<n;i++){
//     cin>>binary[i];
// }
// for(x=0;x<n;x++){
//     if(binary[x] == 0){
//         sec[x]=1;
//     }
//     else if(binary[x]==1){
//         sec[x] = 0;
//     }
//     else{
//         e=1;
//         break;
//     }
// }
// if(e != 1){
// for(int i=n-1;i>=0;i--){
//     if(sec[i]==1 && carry == 1){
//         sec1[i] = 0;
//     }
//     else if(sec[i]==0 && carry == 1){
//         sec1[i]=1;
//         carry=0;
//     }
//     else{
//         sec1[i] = sec[i];
//     }
// }
// cout<<"ones complement is"<<endl;
// for(int i=0;i<n;i++){
//     cout<<sec[i];
// }
// cout<<"two's complement is"<<endl;
// for(int i=0;i<n;i++){
//     cout<<sec1[i];
// }

// }
// else{
//     cout<<"error";
// }

// ans 39
//to convert binary to octal no. system

// def Leibniz(n):
//     sum_=0;
//     i=1
//     while(i<n*2):
//         sum_+=(1/i)-(1/(i+2))
//         i+=4
//     return sum_

//     return 0;
// }

// long long n;
// cin>>n

//C program to check if a number is Kaprekar number or not
// #include <bits/stdc++.h>
//     using namespace std;
//     // Returns true if n is a Kaprekar number, else false
//     bool iskaprekar(int n)
//     {
//         if (n == 1)
//             return true;

//         // Count number of digits in square
//         int sq_n = n * n;
//         int count_digits = 0;
//         while (sq_n)
//         {
//             count_digits++;
//             sq_n /= 10;
//         }

//         sq_n = n * n; // Recompute square as it was changed

//         // Split the square at different poitns and see if sum
//         // of any pair of splitted numbers is equal to n.
//         for (int r_digits = 1; r_digits < count_digits; r_digits++)
//         {
//             int eq_parts = pow(10, r_digits);

//             // To avoid numbers like 10, 100, 1000 (These are not
//             // Karprekar numbers
//             if (eq_parts == n)
//                 continue;

//             // Find sum of current parts and compare with n
//             int sum = sq_n / eq_parts + sq_n % eq_parts;
//             if (sum == n)
//                 return true;
//         }

//         // compare with original number
//         return false;
//     }

//     // Driver code
//     int main()
//     {
//         cout << "Printing first few Kaprekar Numbers"
//                 " using iskaprekar()\n";
//         for (int i = 1; i < 10000; i++)
//             if (iskaprekar(i))
//                 cout << i << " ";
        return 0;
    }
