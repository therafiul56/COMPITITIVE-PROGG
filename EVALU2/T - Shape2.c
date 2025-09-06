#include <stdio.h>
#include <math.h>

int main() {
    int A;
    scanf("%d", &A);
    for(int i=1 ; i<=A ; i++){
        for(int j=1 ;j<=A-i ; j++){
            printf(" ");
        }
        for(int j=1 ; j<=((2*i)-1) ; j++){
            printf("*");
        }
        printf("\n");
        
        
    

        
    }
    return 0;
}
