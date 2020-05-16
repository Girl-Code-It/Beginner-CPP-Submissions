#include<bits/stdc++.h>
#include<string.h>       //question: to print the no of enemies left after attack of arjit's army.
using namespace std;
int main() {
int t,i;
cin>>t;
for (i = 0; i < t; i++) {
char s[100000];
cin>>s;
int q,totalEnemy = 0, xCount = 0,oCount = 0, killingCount = 0;
for (q = 0; q < strlen(s); q++) { //traversing string
if (s[q] == 'O') { //finding O means enemy .
totalEnemy++;
}
}
for (q = 0; q <strlen(s); q++) {
if (s[q] == 'X') { //finding army.
xCount++;
} else if (s[q] == 'O') { 
oCount++;
} else if (s[q] == '*') { //finding fire
xCount = 0;
oCount = 0;
}
if (xCount > 0 && oCount > 0) { //if both no of army and enemies are greater than 0.
killingCount += oCount;         //no of enemies died are .
oCount = 0;
}
}
cout<<(totalEnemy - killingCount)<<endl;// enemies left.
}
}
