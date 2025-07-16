#include<stdio.h>
int main() {
    int num, digit, count = 0;
    scanf("%d%d", &num, &digit);
    while(num) {
        if(num % 10 == digit) count++;
        num /= 10;
    }
    if(count) printf("Occurs %d times", count);
    else printf("Not present");
    return 0;
}