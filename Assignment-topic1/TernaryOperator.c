#include<stdio.h>
int main() {
    float a, b;
    scanf("%f%f", &a, &b);
    float res = a > b ? a + b : a - b;
    printf("%.2f", res);
    return 0;
}