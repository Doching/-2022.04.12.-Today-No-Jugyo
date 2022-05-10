#include <stdio.h>
main () {
    int num=47, cnt=0;
    while(num>=10) {
        num=(num/10)*(num%10); // 몫과 나머지를 곱함(3번) (4*7=28, 2*8=16, 1*6=6)
        cnt=cnt+1; // 1씩 더함
    }
    printf("%d", cnt);
}
