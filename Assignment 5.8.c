#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the three number");
  scanf("%d %d %d",&a,&b,&c);
  int D;
  D=b*b-4*a*c;
  if(D>0)
    {
       printf("real");
    }
  else
  {
           if(D<0) 
           {
             printf("imaginary");
           }
           else
           {
             printf("equal");
           }
   
  }
}   