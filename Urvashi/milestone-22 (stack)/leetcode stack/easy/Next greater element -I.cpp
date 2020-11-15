class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> v1;

        for (int i = 0; i < nums1.size(); i++)
        {
            int max = nums1[i];
            int max2 = -1;
            int count = 0;

            for (int j = 0; j < nums2.size(); j++)
            {
                if (count == 1)
                    if (nums2[j] > max)
                    {
                        max2 = nums2[j];
                        break;
                    }
                if (nums2[j] == max && count == 0)
                    count = 1;
            }
            v1.push_back(max2);
        }
        return v1;
    }
};
