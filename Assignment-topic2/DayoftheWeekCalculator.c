#include<stdio.h>
int main() {
    int year = 1900;
    int input;
    scanf("%d", &input);
    int diff = input - year;
    int leap = (diff / 4) - (diff / 100) + (diff / 400);
    int total = diff * 365 + leap;
    int day = total % 7;
    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    printf("%s", days[day]);
    return 0;
}