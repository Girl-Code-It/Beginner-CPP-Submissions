#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,b,i,arr[26];
    char str[100001],str1[100001];
    scanf("%s",str);
    scanf("%d",&k);
    b=strlen(str);
    for(i=0; i<=k-1; i++)
    {
        arr[str[i]-97]++;
    }
    int q=0;
    for(i=0; i<=25; i++)
    {
        if(arr[i]>0)
        {
            arr[i]--;
            str1[q]=(char)(i+97);
            break;
        }
    }
    for(i=k; i<=b-1; i++)
    {
        arr[str[i]-97]++;
        for(int j=0; j<=25; j++)
        {
            if(arr[j]>0)
            {
                arr[j]--;
                q++;
                str1[q]=(char)(j+97);
                break;
            }
        }
    }
    sort(str,str+b);
    for(i=0; i<=k-2; i++)
    {
        str1[++q]=str[b-k+i+1];
    }
    str1[++q]='\0';
    printf("%s",str1);
    return 0;
}