#include<stdio.h>
int main() {
    for(int z=1; z<50; z++) {
        for(int y=1; y<z; y++) {
            for(int x=1; x<y; x++) {
                if(x*x + y*y == z*z) {
                    printf("%d %d %d\n", x, y, z);
                }
            }
        }
    }
    return 0;
}