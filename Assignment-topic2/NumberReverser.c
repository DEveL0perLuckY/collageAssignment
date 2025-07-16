#include<stdio.h>
int main() {
    int num, rev = 0;
    scanf("%d", &num);
    while(num) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("%d", rev);
    return 0;
}