#include <stdio.h>

int main() {

    const int X=1999;

    for (int i =1; ; i++){
        int b;
        scanf("%d",&b);
        if(b==X){
            printf("Correct\n");
            break;
        }
        else {
            printf("Wrong\n");
        }
    }

    return 0;
}
