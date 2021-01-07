    int findIndex(vector<int> &num, int x)
{
        for(int i=0; i<num.size(); i++)
        {
                if(num[i] == x)
                        return i;
        }
        return 0;
}
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
          vector<int> A;
        for(int i=0; i<nums1.size(); i++)
        {
                int start = findIndex(nums2, nums1[i]);
                int ans = -1;
                int data = nums1[i];
                int flag =0;
                for(int j=start+1; j<nums2.size(); j++)
                {
                        if(nums2[j] > data)
                        {
                                A.push_back(nums2[j]);
                                flag = 1;
                                break;
                        }
                        
                }
                if (flag == 0)
                        A.push_back(-1);
        }
        return A;
    }
