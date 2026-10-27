#include<stdio.h>
#include<math.h>
int main()
{ 
 int a,b,c,max;
 printf("enter a,b,c :");
 scanf("%d%d%d",&a,&b,&c);
 max=(a>b)?((a>c)?a:c):((b>c)?b:c);
 printf("maximum of a,b,c is %d",max);
}  
  