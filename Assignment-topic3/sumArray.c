#include<stdio.h>
int sumArray(int arr[],int i,int n) {
    return i<n?arr[i]+sumArray(arr,i+1,n):0;
}
int main() {
    int n; scanf("%d",&n);
    int arr[n]; for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("%d",sumArray(arr,0,n));
    return 0;
}