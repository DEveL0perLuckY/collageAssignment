#include<stdio.h>
int main() {
    float num;
    scanf("%f", &num);
    if(num < 0) num = -num;
    printf("%.2f", num);
    return 0;
}