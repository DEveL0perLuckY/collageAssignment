#include<stdio.h>
int main() {
    char ch = 'A';
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=i; j++) printf("%c", ch++);
        printf("\n");
    }
    for(int i=2; i>=1; i--) {
        for(int j=1; j<=i; j++) printf("%c", --ch);
        printf("\n");
    }
    return 0;
}