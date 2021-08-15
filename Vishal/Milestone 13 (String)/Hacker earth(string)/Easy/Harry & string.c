#include<stdio.h>

int main()
{
   int v[100000],n;
   char a[100000];
   scanf("%d",&n);

   while(n--)
   {  
      scanf("%s",a);
     int k = 0,cntstr = 0,cntrev = 0;
       for(int i=0;a[i] != '\0';i++)
        {
           if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') 
            {
            v[k] = a[i] - 97;
            k++;
            }
        }
        for(int j=0;j<k-1;j++)
         {
            if(v[j] < v[j+1])
            cntstr++;
            else if(v[j] > v[j+1])
            cntrev++;
            else
            {
              cntstr++;
              cntrev++;      
            }       
         }
        if(cntstr == k-1 || k == 0)
        printf("Good\n");
        else if(cntrev == k-1)
        printf("Worst\n");
        else
        printf("Bad\n");
   }
  return 0;
}

// c++ solution 
// #include<iostream>
// using namespace std;

// int main(){
// 	int T;
// 	cin >> T;
// 	while(T--){
// 		string s, vowel = "";
// 		cin >> s;

// 		int flag = 1;//sorted

// 		for(unsigned int i=0; i<s.size(); i++){
// 			char ch = s[i];
// 			if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
// 				if(ch < vowel.back()){
// 					flag = 0;//acsending not sorted
// 				}
// 				vowel += ch;
// 			}
// 		}

// 		if(flag)
// 			cout << "Good\n";
// 		else{
// 			for(unsigned int i=0;i<vowel.size()-1; i++){
// 				if(vowel[i] < vowel[i+1]){
// 					flag = 1;
// 					break;
// 				}
// 			}
// 			if(flag)
// 				cout << "Bad\n";
// 			else
// 				cout << "Worst\n";
// 		}
// 	}
// 	return 0;
// }