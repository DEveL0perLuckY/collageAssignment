#include<stdio.h>
void printEven(int start,int end) {
    if(start<=end) {
        if(start%2==0) printf("%d ",start);
        printEven(start+1,end);
    }
}
void printOdd(int start,int end) {
    if(start<=end) {
        if(start%2) printf("%d ",start);
        printOdd(start+1,end);
    }
}
int main() {
    int start,end; scanf("%d%d",&start,&end);
    printEven(start,end); printf("\n");
    printOdd(start,end);
    return 0;
}