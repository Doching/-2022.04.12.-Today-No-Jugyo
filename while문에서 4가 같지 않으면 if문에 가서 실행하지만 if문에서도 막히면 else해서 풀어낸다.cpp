#include <stdio.h>
main () {
    int a=20, cnt=0;
    while(a!=4) {
        if(a%2==0)
        a=a/2; /* a=10, 5, else로 이동後, 8, 4 */
        else
        a=a*3+1; // a=16
        cnt++; /* cnt에 5번 더함 */
    } 
    printf("%d", cnt);
}
