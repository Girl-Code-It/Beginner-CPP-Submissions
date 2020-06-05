#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int x;
    int y;
    int steps;
    Node()//default constructor
    { x=y=steps=0;}
    Node(int inx,int iny,int insteps)//parameterized constructor
    { x=inx; y=iny; steps=insteps;}
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;
    bool **board = new bool *[N];// dynamically allocated array for board
    for(int i=0;i<N;i++)
        board[i] = new bool [N];
    
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        {
            char type;
            cin >> type;
            if(type=='X')
                board[i][j] = false;
            else if(type=='.')
                board[i][j] = true;
        }
    int beginx, beginy, endx, endy;
    cin >> beginx >> beginy >> endx >> endy;
    Node begin(beginx,beginy,0);
    
    int *way = new int [2*N-1];
    for(int i=0;i<N;i++)//0,-1,-2,...,-(N-1)
        way[i] = -i;
    for(int i=N;i<2*N-1;i++)//1,2,...,N-1
        way[i] = i-N+1;
    
    queue<Node> q;
    q.push(begin);
    int min = 1e7;
    while(!q.empty())
    {
        Node cur = q.front();
        q.pop();
        
        if(!board[cur.x][cur.y])
            continue;
        board[cur.x][cur.y] = false;
        if(cur.x==endx && cur.y==endy && cur.steps<min)
            min = cur.steps;
        
        for(int dir=0;dir<2;dir++) //0:vertical(x changes),1:honrizonal(y changes)
            for(int i=1;i<2*N-1 && (dir==0?cur.x:cur.y)+way[i]<N;i++)
            {
                if((dir==0?cur.x:cur.y)+way[i]<0)
                {
                    i = N-1;
                    continue;
                }
                
                if(board[cur.x+way[dir==0?i:0]][cur.y+way[dir==1?i:0]])
                {
                    Node n(cur.x+way[dir==0?i:0], cur.y+way[dir==1?i:0], cur.steps+1);
                    q.push(n);
                }
                else if(!board[cur.x+way[dir==0?i:0]][cur.y+way[dir==1?i:0]])
                {
                    if(i<N)//jump left/up
                    {
                        i = N-1;
                        continue;
                    }
                    else if(i>=N)//jump right/down
                        break;
                }
                
            }
    }

    cout << min << endl;
    
    return 0;
}
