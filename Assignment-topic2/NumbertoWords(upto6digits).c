#include<stdio.h>
#include<string.h>
int main() {
    char num[7];
    scanf("%s", num);
    char words[10][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i=0; i<strlen(num); i++) {
        printf("%s ", words[num[i]-'0']);
    }
    return 0;
}