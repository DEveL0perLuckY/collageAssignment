#include<stdio.h>
void minMax(int arr[],int i,int n,int *min,int *max) {
    if(i==n) return;
    if(arr[i]<*min) *min=arr[i];
    if(arr[i]>*max) *max=arr[i];
    minMax(arr,i+1,n,min,max);
}
int main() {
    int n; scanf("%d",&n);
    int arr[n]; for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int min=arr[0],max=arr[0];
    minMax(arr,1,n,&min,&max);
    printf("Min: %d, Max: %d",min,max);
    return 0;
}