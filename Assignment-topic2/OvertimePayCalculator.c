#include<stdio.h>
int main() {
    int hours;
    for(int i=0; i<10; i++) {
        scanf("%d", &hours);
        if(hours > 40) printf("Employee %d: %d\n", i+1, (hours-40)*12);
    }
    return 0;
}