#include<stdlib.h>
int main()
{
  int sum;
  printf("Enter a number");
  scanf("%d",&sum);
  sum=sum/100+(sum/10)%10+sum%10;
  printf("sum=%d",sum);
}