// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int N,M,sum=0;
    scanf("%d %d",&N,&M);
    if(N<=0 || M<=0)
    {
        return 0;
    }
    else if(N<M)
    {
        for(int i=N ; i<=M ; i++)
        {
            sum = sum + i ;
            printf("%d ",i);
         
        }
        printf("sum =%d",sum);
    }
    else if(M<N)
    {
        for(int i=M ; i<=N ; i++)
        {
            sum = sum + i ;
            printf("%d ",i);
         
        }
        printf("sum =%d",sum);
    }
    
        
   
    
    return 0;
}
