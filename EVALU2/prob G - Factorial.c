#include <stdio.h>

int main() {
    int N , A;
    scanf("%d",&N);
    for(int i=1; i<=N;i++){ 
    int sum=1;
    scanf("%d",&A);
    for(int j=1; j<=A ;j++)
    {
        sum=sum*j;
    }
    printf("%d\n",sum);
        
    }
   
    return 0;
}
