#include<stdio.h>
long fact(int n) {
    return n?n*fact(n-1):1;
}
int main() {
    int n; scanf("%d",&n);
    printf("%ld",fact(n));
    return 0;
}