
int *nextGreaterElement(int *nums1,int nums1Size,int *nums2,int nums2Size,int *resultSize)
{
    int *nextGreater = (int *)malloc(nums1Size*sizeof(int));

    for(int i = 0; i < nums1Size ; i++)
    {
        int next = -1,j;

        //Find the index of element
        for(j = 0; j < nums2Size ; j++)
        {
            if(nums2[j] == nums1[i])
                break;
        }

        //find greater element
        for( ; j < nums2Size ; j++)
        {
            if(nums2[j] > nums1[i])
            {
                next = nums2[j];
                break;
            }
        }

        nextGreater[i] = next;
    }

    *resultSize = nums1Size;
    return nextGreater;
}