#include <stdio.h>

int main() {
    int N,years,months,dayes;
    scanf("%d",&N);
    years=(N/365);
    months=((N%360)/30);
    dayes= ((N%365)%30);
        printf("%d years\n%d months\n%d days",years,months,dayes);

    return 0;
}
