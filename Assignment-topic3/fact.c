#include<stdio.h>
#include<math.h>
double fact(int n) {
    return n?n*fact(n-1):1;
}
double sinx(double x) {
    double sum=0;
    for(int i=1,sign=1;i<=9;i+=2,sign*=-1) 
        sum+=sign*pow(x,i)/fact(i);
    return sum;
}
int main() {
    double x; scanf("%lf",&x);
    printf("%.5f",sinx(x));
    return 0;
}