#include <iostream>

int main()
{
    int r, c, i, j;
    std::cin >> r ;
    std::cin >> c ;
    int arr[r][c];
    int arrTemp[r][c] ;
    
    for ( i = 0 ; i < r ; i++ )
    {
        for ( j = 0 ; j < c ; j++ )
        {
            std::cin >> arr[i][j] ;
        }
    }
    
    for( i = 0 ; i < r ; i++ )
    {
        for( j = 0 ; j < c ; j++ )
        {
            arrTemp[i][j] = 0 ;
        }
    }
    
    for( i = 0 ; i < r ; i++ )
    {
        for ( j = 0 ; j < c ; j++ )
        {
            if ( arr[i][j] == 1 )
            {
                for( int k = 0 ; k < c ; k++  )
                    arrTemp[i][k] = 1 ;
                for( int l = 0 ; l < r ; l++ )
                    arrTemp[l][j] = 1 ;
            }
        }
    }
    
    for( i = 0 ; i < r ; i++ )
    {
        for( j = 0 ; j < c ; j++ )
        {
            if(j != c-1) 
		std::cout << arrTemp[i][j] << ' ' ;
	    else
		std::cout << arrTemp[i][j]; 
			
        }
        std::cout << '\n' ;
    }
    return 0;
}


