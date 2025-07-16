#include<stdio.h>
#include<math.h>
double area(double a,double b,double c) {
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main() {
    double a,b,c; scanf("%lf%lf%lf",&a,&b,&c);
    printf("%.2f",area(a,b,c));
    return 0;
}