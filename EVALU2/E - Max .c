#include <stdio.h>

int main() {
    int A,B,C=0;
    scanf("%d",&A);
    for(int i=1;i<=A;i++)
    {
        scanf("%d",&B);
        if(B>C){
            C=B;
        }
    }
    printf("%d",C);

    return 0;
}
