#include <stdio.h>

int main() {
    int A,j;
    scanf("%d",&A);
    for(int i=1;i<=A*4;i+=4)
    {
        for(  j=i ; j%4==0 || j%4>0 ; j++)
        {
            if(j%4!=0){
                printf("%d ",j);
            }
            else if(j%4==0){
                printf("pum");
                break;
            }
        }
        if(j==A*4){
            break;
        }
        printf("\n");
        
    }
    

    return 0;
}
