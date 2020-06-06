#include<iostream>
using namespace std;

struct crewmember
{
    long long int height;
    int st;
    int et;
};

struct cust
{
    long long int height;
    int t;
};

struct crewmember crewmembers[100001] = {0};
int crew_size = 0;

void enq(long long int height,int st, int et)
{
    crewmembers[crew_size].height = height;
    crewmembers[crew_size].st = st;
    crewmembers[crew_size].et = et;
    crew_size++;
}

int check(struct cust c)
{
    bool flag = true;
    for(int i =0; i < crew_size; i++)
    {
        if(c.t <= crewmembers[i].et)
        {
            if(c.t>= crewmembers[i].st)
            {
                if(c.height <= crewmembers[i].height)
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    return flag;
}

int main()
{
    int H, maxh = 0,C,Q;
    cin>>H>>C>>Q;
    
    while(C--)
    {
        long long int h;
        int st,et;
        cin >> h >> st >> et;
        
        if(h > maxh)
            maxh = h;
   
        enq(h,st,et);
    }

    while(Q--)
    {
        struct cust c;
        cin>>c.height>>c.t;
        
        if(c.height > maxh)
            cout<< "YES" <<endl;
        else
        {
            bool flag = check(c);
            
            if(flag)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}