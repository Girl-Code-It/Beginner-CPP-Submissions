//https://codezen.codingninjas.com/practice/470/2298/check-subset

#include<unordered_set>

bool CheckSubset(int arr1[], int n1, int arr2[], int n2) {
	if(n2>n1){
        return false;
    }
    
    unordered_set<int> s;
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }
    
    for(int i=0;i<n2;i++){
        if(s.find(arr2[i]) == s.end()){
            return false;
        }
        else{
            s.erase(arr2[i]);
        }
    }
    
    return true;
}
