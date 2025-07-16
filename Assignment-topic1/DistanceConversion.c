#include<stdio.h>
int main() {
    float km;
    scanf("%f", &km);
    float meters = km * 1000;
    float feet = km * 3280.84;
    float inches = km * 39370.1;
    float cm = km * 100000;
    printf("%.2f\n%.2f\n%.2f\n%.2f", meters, feet, inches, cm);
    return 0;
}