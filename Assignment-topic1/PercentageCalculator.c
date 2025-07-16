#include<stdio.h>
int main() {
    float m1, m2, m3, m4, m5;
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
    float total = m1 + m2 + m3 + m4 + m5;
    float percent = (total / 500) * 100;
    printf("%.2f", percent);
    return 0;
}