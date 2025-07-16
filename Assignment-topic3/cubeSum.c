#include<stdio.h>
int cubeSum(int n) {
    return n?pow(n%10,3)+cubeSum(n/10):0;
}
int main() {
    int start,end; scanf("%d%d",&start,&end);
    for(int i=start;i<=end;i++)
        if(i==cubeSum(i)) printf("%d ",i);
    return 0;
}