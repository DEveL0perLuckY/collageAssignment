#include<stdio.h>
int main() {
    float l, b;
    scanf("%f%f", &l, &b);
    float area = l * b;
    float perimeter = 2 * (l + b);
    if(area > perimeter) printf("Area is greater");
    else printf("Perimeter is greater");
    return 0;
}