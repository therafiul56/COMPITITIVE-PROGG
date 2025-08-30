#include <stdio.h>

int main() {
    long long N,B,C,result=0;
    
    scanf(" %lld",&N);
    B=N;
    while(N>0){
        C=N%10;
        result = result * 10 + C;
        N=N/10;
    }
    printf("%lld\n",result);
    if(result == B){
        printf("YES");

    }else {  printf("NO");}


    return 0;
}
