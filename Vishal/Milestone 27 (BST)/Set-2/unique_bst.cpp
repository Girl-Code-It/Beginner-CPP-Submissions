class Solution
{
public:
    int numTrees(int n)
    {
        /*
        for n = 1 , ans = 1
        for n = 2 , ans = 2;
        for n = 3 , ans = 5;
        for n = 4 , ans = 14;
        
        so we can generalise
        
        ans = 2nCn/(n+1);
        
        2nCn = (2n)!/(n!)(n!);
        */
        
        unsigned long coeff = 1;
      
        for(int i=0;i<n;i++)
        {
            coeff *= (2*n-i);
            coeff /= (i+1);
        }
        
        return coeff/(n+1);
    }
};