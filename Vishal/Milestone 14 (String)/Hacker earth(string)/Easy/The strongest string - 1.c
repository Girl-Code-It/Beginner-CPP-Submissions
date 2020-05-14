#include <stdio.h>

int main()
{
    int n,vis [26 + 1] = {0};
    scanf("%d",&n);
    char s[n + 1];
    scanf("%s",s);
    int st = 0, len = strlen(s);

    while(st < len)
    {
        int maxi_index = -1;
        char maxi = 'Z';

        for(int i = st; i < len; i++)
        {

            if(s[i] > maxi && vis[ s[i] - 'a' ] != 1)
            {
                maxi = s[i];
                maxi_index = i;
            }
        }

        if(maxi_index == -1)
        break;
        printf("%c",maxi);
        st = maxi_index + 1;
        vis[maxi - 'a'] = 1;
    }
    return 0;
}