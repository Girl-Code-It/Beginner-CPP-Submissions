void CountQuadruples(int arr[], int n) {	
	int maxProduct = INT_MIN ; // to store product with max quadraples
    int maxCount = INT_MIN ; // to store count of quadraples .
    int tempProduct ;
    map<int,pair<int,int>>m;
    pair<int,int>tempPair;
    
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j < n ; j++){
            tempProduct = arr[i] * arr[j] ;
            tempPair = make_pair(1,0) ;
            
            if(m.find(tempProduct) != m.end()){ // if already same product exists.
                tempPair = m[tempProduct];
                tempPair.second += tempPair.first;
                tempPair.first++ ;
                
                // if there are more than one product with same no of quadraples count
                // then choosing lesser product.
                if(maxCount == tempPair.second){ 
                    maxProduct = (tempProduct < maxProduct) ? tempProduct:maxProduct;
                }
                
                // if found more combinations of quadraples then update.
                else if(maxCount < tempPair.second){
                    maxCount = tempPair.second ;
                    maxProduct = tempProduct;
                }
            }
          m[tempProduct] = tempPair;
        }
    }
    // if no such quadraple found which follow that condition
    if(maxCount == INT_MIN){
        cout<<"0"<<endl;
        return ;
    }
    
    cout<<maxProduct<<" "<<m[maxProduct].second<<endl;
}

