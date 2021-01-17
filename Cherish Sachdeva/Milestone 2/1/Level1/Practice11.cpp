#include<bits/stdc++.h>
using namespace std;
int main(){
	char inp;
	cin>>inp;
	int islower,isupper;
	islower=(inp=='a'||inp=='b'||inp=='c'||inp=='d'||inp=='e'||inp=='f'||inp=='g'||inp=='h'||inp=='i'||inp=='j'||inp=='k'||inp=='l'||inp=='m'||inp=='n'||inp=='o'||inp=='p'||inp=='q'||inp=='r'||inp=='s'||inp=='t'||inp=='u'||inp=='v'||inp=='w'||inp=='x'||inp=='y'||inp=='z');
	isupper=(inp=='A'||inp=='B'||inp=='C'||inp=='D'||inp=='E'||inp=='F'||inp=='G'||inp=='H'||inp=='I'||inp=='J'||inp=='K'||inp=='L'||inp=='M'||inp=='N'||inp=='O'||inp=='P'||inp=='Q'||inp=='R'||inp=='S'||inp=='T'||inp=='U'||inp=='V'||inp=='W'||inp=='X'||inp=='Y'||inp=='Z');
	if(islower){
		cout<<"LowerCase"<<endl;
	}else if(isupper){
		cout<<"Uppercase"<<endl;
	}else{
		cout<<"Enter a valid character"<<endl;
	}
	return 0;
}