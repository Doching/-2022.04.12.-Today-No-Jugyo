#include <stdio.h>
main () {
    int k=1, n, sum=0, cnt=0;
    while(k<=20) {
        n=k-(k/4)*4; // 4의 배수를 구하는 문장 
        if(n==0) {
            sum=sum+k; // sum = 4, 8, 12, 16, 20을 더함 
            cnt=cnt+1; // cnt = 1씩 더해짐 
        }
        k++;  // 끝나면서 1씩 더함 
    }
    printf("cnt = %5d, sum = %d", cnt, sum);
}
