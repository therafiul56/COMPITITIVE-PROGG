#include <stdio.h>
void Digitreversal(long long x)
{
    long long C;
    
            for(;x%10>0;)
            {
                C=x%10;
                printf("%lld ",C);
                x/=10;
            }
}
int main() {
    long long A,B,C;
    scanf("%lld",&A);
    for(long long i =1 ; i<=A ; i++)
    {
        scanf("%lld",&B);
            Digitreversal(B);
    }
        

    return 0;
}
