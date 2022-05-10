#include <stdio.h>
main () {
    int a=1, b;
    while(a<=3){
        b=1;
        while(b<=a) {
            printf("*");
            b++;
        }
        printf("\n");
        a++;
    }
}
