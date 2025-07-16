#include<stdio.h>
int main() {
    float r;
    scanf("%f", &r);
    float area = 3.14159 * r * r;
    float perimeter = 2 * 3.14159 * r;
    printf("%.2f\n%.2f", area, perimeter);
    return 0;
}