#include<stdio.h>
int sumNatural(int n) {
    return n?n+sumNatural(n-1):0;
}
int main() {
    int n; scanf("%d",&n);
    printf("%d",sumNatural(n));
    return 0;
}