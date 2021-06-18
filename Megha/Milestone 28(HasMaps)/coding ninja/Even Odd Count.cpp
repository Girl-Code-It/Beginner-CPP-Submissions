//https://codezen.codingninjas.com/practice/470/2289/even-odd-count

#include<unordered_map>

void FindOccurance(int arr[],int size) {
	/*Write your code here.
	*Dont write main(). 
	*Dont take input, it is passed as function argument.
	*Print output as specified in question.
	*/
    unordered_map<int,int> m;
    int odd=0,even=0;
    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }
        
    for(int i=0;i<size;i++){
        if(m.find(arr[i]) != m.end()){
            if(m[arr[i]] % 2 == 0)
                even++;
            else
                odd++;
    }
        m.erase(arr[i]);
     }
    cout<<odd<<" "<<even;
}
