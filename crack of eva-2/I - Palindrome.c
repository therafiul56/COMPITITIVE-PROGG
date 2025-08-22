// bhai jemne disen omne pari nai but some how milaisi :')
#include <stdio.h>
#include <math.h>

int main() {
    
    int A,B,C,Modulus,mod2=0 ;
    printf("enter total digit number(1234=4,12564=5):");
    scanf("%d",&B);
    printf("enter the digit:");
    scanf("%d",&C);
    printf("enter the digit again:");
    scanf("%d",&A);

    

    for(int i=1;i<=B;i++)
    {
        Modulus=C%10;
        if(C%10==Modulus)
        {
            mod2+=Modulus*pow(10,B-i);
        }
        C=C/10;
    }
    printf("%d\n",mod2);
    if(A==mod2)
    {
        printf("Palindrome");
    }
    else{ printf("Not Palindrome");}

   
    return 0;
}
