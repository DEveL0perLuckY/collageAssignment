#include<stdio.h>
int main() {
    float p, r, t;
    scanf("%f%f%f", &p, &r, &t);
    float si = (p * r * t) / 100;
    printf("%.2f", si);
    return 0;
}