#include<stdio.h>
int main() {
    int x, y, result = 1;
    scanf("%d%d", &x, &y);
    for(int i=0; i<y; i++) result *= x;
    printf("%d", result);
    return 0;
}