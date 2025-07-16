#include<stdio.h>
int main() {
    int ram, shyam, ajay;
    scanf("%d%d%d", &ram, &shyam, &ajay);
    if(ram < shyam && ram < ajay) printf("Ram");
    else if(shyam < ram && shyam < ajay) printf("Shyam");
    else printf("Ajay");
    return 0;
}