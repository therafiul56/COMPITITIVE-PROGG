#include<stdio.h>
int main()
{
   long long a;
   scanf("%lld",&a);
   for(int i=1 ; i<=a ; i++){
   if(a%i==0){
     printf("%d\n",i);
     }
   }

  return 0;
}
