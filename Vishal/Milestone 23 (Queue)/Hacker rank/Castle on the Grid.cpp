#include <cstdio>

const int N = 101;

char a[N][N];
int qx[N*N],qy[N*N];
int d[N][N];

int main()
{
    int n,sa,sb,ta,tb;
    scanf(" %d", &n);

    for(int i = 0; i < n; i++)
        scanf(" %s", a[i]);


    scanf(" %d %d", &sa, &sb);
    scanf(" %d %d", &ta, &tb);

    int e = 0;
    qx[e] = sa;
    qy[e] = sb;
    d[sa][sb] = 1;
    e++;

    for (int it = 0; it < e; it++)
    {
        int x = qx[it];
        int y = qy[it];
        
        //Moving Upward
        for (int i = y + 1; i < n; i++)
        {
            //obstacle
            if (a[x][i] == 'X')
                break;
            
            //Not Explore 
            if (!d[x][i])
            {
                qx[e] = x;
                qy[e] = i;
                e++;
                d[x][i] = d[x][y] + 1;
            }
        }
        
        //Moving Downward
        for (int i = y - 1; i >= 0; i--)
        {
            if (a[x][i] == 'X')
                break;
            
            if (!d[x][i])
            {
                qx[e] = x;
                qy[e] = i;
                e++;
                d[x][i] = d[x][y] + 1;
            }
        }
        
        //Moving Right
        for (int i = x + 1; i < n; i++)
        {
            if (a[i][y] == 'X')
                break;
            
            if (!d[i][y])
            {
                qx[e] = i;
                qy[e] = y;
                e++;
                d[i][y] = d[x][y] + 1;
            }
        }
        
        //Moving Left
        for (int i = x - 1; i >= 0; i--)
        {
            if (a[i][y] == 'X')
                break;
            
            if (!d[i][y])
            {
                qx[e] = i;
                qy[e] = y;
                e++;
                d[i][y] = d[x][y] + 1;
            }
        }
        
    }
    
    printf ("%d\n", d[ta][tb] - 1);

    return 0;
}