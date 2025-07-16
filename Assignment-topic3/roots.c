#include<stdio.h>
#include<math.h>
void roots(double a,double b,double c) {
    double d=b*b-4*a*c;
    if(d<0) printf("Imaginary roots");
    else if(!d) printf("Root: %.2f",-b/(2*a));
    else printf("Root1: %.2f, Root2: %.2f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
}
int main() {
    double a,b,c; scanf("%lf%lf%lf",&a,&b,&c);
    roots(a,b,c);
    return 0;
}