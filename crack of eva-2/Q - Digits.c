/*bhai again ami just ei logic ta paitisi na je kivabe digit gula re count kore totobar loop ta chala bo tai just digit number ta add kortisi*/
#include <stdio.h>

int main() {
    int A,B,C;
    printf("Enter the digit number(1253=4,13=2.):");
    scanf("%d",&A);
    scanf("%d",&B);
    for(int i=1;i<=A;i++)
    {
        C=B%10;
        printf("%d ",C);
        B=B/10;
    }
        

    return 0;
}
