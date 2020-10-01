#include<iostream>
#include<deque>

using namespace std;

typedef struct
{
    int schoolNo;
    int rollNo;
} student;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int nq,flag;
    char type;
    student t;
    cin >> nq;
    deque<student> dq,temp;

    for(int i=0; i<nq; i++)
    {
        cin >> type;

        if(type == 'D')
        {
            t = dq.front();
            cout << t.schoolNo << " " << t.rollNo << "\n";

            dq.pop_front();
        }
        else
        {
            student st;
            cin >> st.schoolNo >> st.rollNo;

            if(dq.empty())
                dq.push_back(st);

            else
            {
                t = dq.back();
                temp.push_back(t);
                dq.pop_back();
                flag = 0;

                while(t.schoolNo != st.schoolNo)
                {
                    if(dq.empty())
                        break;

                    t = dq.back();

                    if(t.schoolNo == st.schoolNo)
                    {
                        dq.push_back(st);
                        flag = 1;
                        break;
                    }

                    temp.push_back(t);
                    dq.pop_back();
                }

                while(! temp.empty())
                {
                    dq.push_back(temp.back());
                    temp.pop_back();
                }

                if(flag == 0)
                    dq.push_back(st);
            }
        }
    }

    return 0;
}