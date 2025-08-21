#include <stdio.h>

int main(){
    long long N,odd=0,even=0, positive=0, negative=0;
    scanf("%lld",&N);
    for(int i=1 ;i<=N ;i++){
        int B;
        scanf("%d",&B);
        if(B<0){
            negative++;
        }
        if(B>0){
            positive++;
        }
        if(B%2==0){
            even++;
        }
        if(B%2!=0){
            odd++;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);
    return 0;
}
