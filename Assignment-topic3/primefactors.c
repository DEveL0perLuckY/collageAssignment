#include<stdio.h>
void primeFactors(int n) {
    int i=2;
    while(n>1) {
        if(n%i==0) {
            printf("%d ",i);
            n/=i;
        } else i++;
    }
}
void primeFactorsRec(int n, int i) {
    if(n<=1) return;
    if(n%i==0) {
        printf("%d ",i);
        primeFactorsRec(n/i,i);
    } else primeFactorsRec(n,i+1);
}
int main() {
    int n; scanf("%d",&n);
    primeFactors(n); printf("\n");
    primeFactorsRec(n,2);
    return 0;
}