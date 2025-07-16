#include<stdio.h>
int sumDigits(int n) {
    return n?n%10+sumDigits(n/10):0;
}
int main() {
    int n; scanf("%d",&n);
    printf("%d",sumDigits(n));
    return 0;
}