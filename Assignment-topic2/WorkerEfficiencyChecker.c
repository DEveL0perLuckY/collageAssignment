#include<stdio.h>
int main() {
    float hours;
    scanf("%f", &hours);
    if(hours >= 2 && hours <= 3) printf("Highly efficient");
    else if(hours > 3 && hours <= 4) printf("Improve speed");
    else if(hours > 4 && hours <= 5) printf("Training needed");
    else printf("Leave company");
    return 0;
}