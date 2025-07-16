#include<stdio.h>
void printWords(int n) {
    char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n/10) printWords(n/10);
    printf("%s ",words[n%10]);
}
int main() {
    int n; scanf("%d",&n);
    printWords(n);
    return 0;
}