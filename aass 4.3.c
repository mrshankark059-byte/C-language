#include<stdio.h>
int main()
{
  int a;
  printf("Enter a number");
  scanf("%d",&a);
 if(a>=100&&a<=999) 
 {
     a=a/100+(a/10)%10+a%10;
      printf("a=%d",a);
   } 
 else
 {

printf("wrong");

 }

}