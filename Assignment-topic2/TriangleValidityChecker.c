#include<stdio.h>
int main() {
    float a1, a2, a3;
    scanf("%f%f%f", &a1, &a2, &a3);
    if(a1 + a2 + a3 == 180) printf("Valid");
    else printf("Invalid");
    return 0;
}