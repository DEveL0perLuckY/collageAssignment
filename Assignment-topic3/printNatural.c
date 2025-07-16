#include<stdio.h>
void printNatural(int n) {
    if(n>1) printNatural(n-1);
    printf("%d ",n);
}
int main() {
    int n; scanf("%d",&n);
    printNatural(n);
    return 0;
}