#include<stdio.h>
int main() {
    float basic;
    scanf("%f", &basic);
    float da = 0.4 * basic;
    float hra = 0.2 * basic;
    float gross = basic + da + hra;
    printf("%.2f", gross);
    return 0;
}