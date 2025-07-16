#include<stdio.h>
int main() {
    int num, original, rev = 0;
    scanf("%d", &num);
    original = num;
    while(num) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed: %d\n", rev);
    if(original == rev) printf("Equal");
    else printf("Not equal");
    return 0;
}