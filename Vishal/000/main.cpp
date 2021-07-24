#include<iostream>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%f\n", (x+y) < 6 ? 1 - (float)(x+y)/6 : 0);
    }
    return 0;
}