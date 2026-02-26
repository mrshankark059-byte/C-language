#include<stdio.h>

int main()
{
 int a='int';
 a=sizeof(int);   /* int type ke data ka size nikal rahe h */
 printf("x=%d",a);  /* jo ke 'a' me assing h  int variable*/
 
 printf("\n");
 
 char b='char';
 b=sizeof(char);
 printf("b=%d",b);
 
 
 printf("\n");
 
 float c='float';
 printf("c=%d",sizeof(float)); 
 
 
 
 printf("\n");
 
 
 double x='double';
 printf("x=%d",sizeof(double));
 
    return 0;
}
