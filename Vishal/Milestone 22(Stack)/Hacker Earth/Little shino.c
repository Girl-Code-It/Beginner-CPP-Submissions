#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
        
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int left = i-1,right = i+1;
        
        while(left >= 0 && a[left] < a[i])
            left--;
            
        while(right < n && a[right] < a[i])
            right++;
            
        if(left != -1)
            ans++;
            
        if(right != n)
            ans++;
            
    }
    printf("%d", ans);
    return 0;
}