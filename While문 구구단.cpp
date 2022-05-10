#include <stdio.h>
main () {
    int j, k=2;
    while(k<=9) {
        j=1;
        while(j<=9) {
            printf("%d * %d = %d\n", k, j, k*j);
            j++;
        }
        printf("\n");
        k++;
    }
}
