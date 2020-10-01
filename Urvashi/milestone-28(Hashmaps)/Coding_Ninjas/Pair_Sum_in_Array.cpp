#include<math.h>
#include<algorithm>

void pairSum(int input[], int size, int x) {
    sort(input , input + size) ;
    int l = 0 , h = size - 1 ;
    while(l < h)
    {
        if(input[l] + input[h] < x)
            l++ ;
        else if(input[l] + input[h] > x)
            h-- ;
        else
        {
            int tempLeft = input[l];
            int leftCount = 0 ;
            while(input[l] == tempLeft) 
            {
                leftCount++ ; // counting similar left elements
                l++ ;
            }
            
            int tempRight = input[h] ;
            int pairCount ;
            if(tempLeft == tempRight) // this is case of 2,2,2,2,2
                pairCount = (leftCount*(leftCount - 1))/ 2 ;
            else
            {
                int rightCount = 0 ;
                while(input[h] == tempRight)
                {
                    rightCount++ ; // counting similar right elements
                    h-- ;
                }
				// lets take case 5,3,3,6,7,9,9,9 , in this leftcount is count of 3 which is 2 
				// and rightcount is 3 which is count of 9 so paircount is 2*3 = 6 
                pairCount = leftCount * rightCount ; 
            }
            while(pairCount-- )
            cout<<tempLeft << " " << tempRight<<"\n";
        }
        
    }

}

