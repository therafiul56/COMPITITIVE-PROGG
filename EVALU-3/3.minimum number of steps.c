#include <stdio.h>

int main() {
    int a,count=0;
    scanf("%d",&a);
    for(int i= 1 ; i<=a ; i+=5){
        count++;
    }
    printf("%d",count);

    return 0;
}
