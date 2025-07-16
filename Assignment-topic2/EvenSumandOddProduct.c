#include<stdio.h>
int main() {
    int num, even_sum = 0, odd_prod = 1;
    scanf("%d", &num);
    while(num) {
        int digit = num % 10;
        if(digit % 2 == 0) even_sum += digit;
        else odd_prod *= digit;
        num /= 10;
    }
    printf("Sum: %d\nProduct: %d", even_sum, odd_prod);
    return 0;
}