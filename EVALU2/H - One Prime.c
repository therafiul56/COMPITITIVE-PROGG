#include <stdio.h>

int main() {
    long long B ;
    scanf("%lld",&B);
    if(B==1)
    {
        printf("NO");
    }
    if(B==2)
    {
        printf("YES");
    
    }
    for(long long i=2;i<=B;i++)
    {
        if(B%i==0 && B!=2)
        {
            printf("NO");
            break;
        }
        if(B%i!=0)
        {
            printf("YES");
            break;
        }
    }
    
   
    return 0;
}
