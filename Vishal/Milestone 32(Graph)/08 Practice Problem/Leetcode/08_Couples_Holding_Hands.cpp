// https://leetcode.com/problems/couples-holding-hands/

/*
    Solution : Using Quick Union
*/

class Solution
{
    int findGroup(vector<int> &groups, int person)
    {
        return groups[person];
    }

    void Union(vector<int> &groups, int person1, int person2)
    {
        int group = groups[person1];
        for (int i = 0; i < groups.size(); i++)
        {
            if (groups[i] == group)
                groups[i] = groups[person2];
        }
    }

public:
    int minSwapsCouples(vector<int> &row)
    {
        int N = row.size() / 2;
        int swap = 0;

        // initially we have N couples, each couple will have the same group identifier
        // index :              0 1 2 3 4 5 6 7 8 9
        // couple:              0 1 2 3 4 5 6 7 8 9
        // group identifier:    0 0 1 1 2 2 3 3 4 4
        vector<int> groups(row.size());
        for (int group = 0; group < N; group++)
        {
            groups[group * 2] = group;
            groups[group * 2 + 1] = group;
        }

        // Since number of seats are even and all couples want to hold hands
        // if i is the group number, 0 <= i < N, each couple should seat at positions of 2*i and 2*i+1
        for (int group = 0; group < N; group++)
        {
            int person1 = row[2 * group];
            int person2 = row[2 * group + 1];

            int couple1 = person1 / 2;
            int couple2 = person2 / 2;

            if (couple1 != couple2)
            {
                // if these two person are not couples (each person from different couples)
                // if we do swap people from two couples for the first time, this swap is counted
                // if we want to swap people from the same two couples for the second time, we don't need to
                // do anything since the first swap already exchange the 2 people to meet their love partners.
                if (findGroup(groups, person1) != findGroup(groups, person2))
                {
                    swap++;
                    // union couples into same group
                    Union(groups, person1, person2);
                }
            }
        }
        return swap;
    }
};