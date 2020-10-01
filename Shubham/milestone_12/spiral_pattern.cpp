 #include<cstdlib>
 #include<iostream>

 using namespace std;

 int main()
 {
     int arr[5][5] = {
                     {1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}
                     };

    int t=0, b=4, l=0, r=4, i;
    int dir =0;
    while(t <= b && l <= r)
    {

        //left to right
        if(dir == 0)
        {
            for(i=l; i<=r; i++)
            {
                cout << arr[t][i] << "  ";
            }
            dir = 1; 
            t++;
        }

        //top to bottom
        else if(dir == 1)
        {
            for(i=t; i<=b; i++)
            {
                cout << arr[i][r] << "  ";
            }
            dir = 2;
            r--;
        }


        else if(dir == 2)
        {
            for(i=r; i>=l; i--)
            {
                cout << arr[b][i] << "  ";
            }
            b--;
            dir = 3;
        }

        else if(dir == 3)
        {
            for(i=b; i>=t; i--)
            {
                cout << arr[i][l] << "  ";
            }
            l++;
            dir = 0;
        }


    }
 }

