#include <stdio.h>
#include<stdlib.h>

int main() {
    unsigned long long n;
    int count=0;
    while(scanf("%llu",&n) != EOF){  //eof is end of file
    while(n){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    printf("%d\n",count);}
    return 0;
}
