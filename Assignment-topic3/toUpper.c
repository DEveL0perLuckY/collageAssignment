#include<stdio.h>
char toUpper(char c) {
    return c>='a'&&c<='z'?c-32:c;
}
int main() {
    char c; scanf("%c",&c);
    printf("%c",toUpper(c));
    return 0;
}