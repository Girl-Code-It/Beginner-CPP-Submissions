#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void reverse(char *a, int left, int right)
{
    if (left < right)
    {
        char temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        reverse(a, left + 1, right - 1);
    }
}
int main()
{
    char a[100];
    gets(a);
    int len = strlen(a);
    reverse(a, 0, len - 1);
    puts(a);
}
