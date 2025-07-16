#include<stdio.h>
int rev(int n,int r) {
    return n?rev(n/10,r*10+n%10):r;
}
int main() {
    int n; scanf("%d",&n);
    printf(n==rev(n,0)?"Palindrome":"Not Palindrome");
    return 0;
}