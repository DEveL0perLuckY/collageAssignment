#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int last = num % 10;
    int first = num / 1000;
    printf("%d", first + last);
    return 0;
}