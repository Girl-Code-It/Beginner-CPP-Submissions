#include<map>

void CountQuadruples(int arr[], int n)
{
    int maxCount = 0,maxProduct = 0,tempProd;
    pair<int,int>tempPair;
    
    map<int,pair<int,int> >m;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            tempProd = arr[i]*arr[j];
            tempPair = {1,0};
            
            if(m.find(tempProd) != m.end())
            {
                tempPair = m[tempProd];
                tempPair.second += tempPair.first;
                tempPair.first++;
            
                if(maxCount == tempPair.second)
                {
                    maxProduct = (maxProduct > tempProd) ? tempProd : maxProduct;
                }
                else if(maxCount < tempPair.second)
                {
                    maxCount = tempPair.second;
                    maxProduct = tempProd;
                }
            }
            
            m[tempProd] = tempPair;
        }
    } 
    if(maxCount == 0)
        cout <<"Not Found";
    else
        cout <<maxProduct << " " << maxCount;
}