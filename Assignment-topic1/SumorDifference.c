#include<stdio.h>
int main() {
    float a, b;
    scanf("%f%f", &a, &b);
    if(a > b) printf("%.2f", a + b);
    else printf("%.2f", a - b);
    return 0;
}