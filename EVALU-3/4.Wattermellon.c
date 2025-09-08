#include <stdio.h>

int main() 
{
    int a,c;
    scanf("%d",&a);
    if(a==2)
    {
        printf("NO");
    }
    else 
    {
      for(int i=1 ; i<=a ; i++)
      {
        c=a/i;
        if(c%2==0)
        {
          printf("YES");
          break;
        }
        else{
          printf("NO");
          break;
        }
      }
    }
  return 0;
}
