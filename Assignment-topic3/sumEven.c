#include<stdio.h>
int sumEven(int start,int end) {
    if(start>end) return 0;
    return (start%2?0:start) + sumEven(start+1,end);
}
int sumOdd(int start,int end) {
    if(start>end) return 0;
    return (start%2?start:0) + sumOdd(start+1,end);
}
int main() {
    int start,end; scanf("%d%d",&start,&end);
    printf("Even sum: %d\n",sumEven(start,end));
    printf("Odd sum: %d",sumOdd(start,end));
    return 0;
}