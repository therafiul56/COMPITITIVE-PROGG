#include <stdio.h>

int main() {
    int A,B,C,result,sum=0,mul=1,Div=0;
    char S,Q ='=';
    scanf("%d %c %d %c %d",&A,&C,&B,&S,&result);
    sum=A+B;
    mul=A*B;
    Div=A-B;
    
    
    if(C == '+' && result == sum)
    {
        printf("Yes");
    }
    else if(C == '+' && result != sum)
    {
        printf("%d",A+B);
    }
    if(C == '-' && result == Div)
    {
        printf("Yes");
    }
    else if(C == '-' && result != Div)
    {
        printf("%d",A-B);
    }
    if(C == '*' && result == mul)
    {
        printf("Yes");
    }
    else if(C == '*' && result != mul)
    {
        printf("%d",A*B);
    }

    return 0;
}
