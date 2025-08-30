// Online C compiler to run C program online
#include <stdio.h>
int SUMMATION(int x , int y );

int main() {
    int N,M,T,sum=0;
    scanf("%d",&T);
    for(int j=1 ; j<=T ; j++)
    {
            scanf("%d %d",&N,&M);
    if(N<M)
    {
        sum = SUMMATION(N,M);
        printf("%d",sum);
    }
    else if(M<N)
    {
        sum = SUMMATION(M,N);
        printf("%d",sum);
    }
    
        
   

    }
    return 0;
}
int SUMMATION(int x , int y ){
    int sum = 0;
     for(int i=x+1 ; i<y ; i++)
        {
            if(i%2!=0)
            {
                 sum = sum + i ;
            }
        }
        return sum;
}
