#include<stdio.h>
#include<math.h>
int main()
{ 
  int n1,n2,n3,n4,max,min;
  printf("n1,n2,n3,n4 :");
  scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
  max=min=n1;
  if(n2>max)
   max=n2;
  else 
   min=n2;
  if(n3>max)
   max=n3;
  else 
   min=n3;
  if(n4>max)
   max=n4;
  else
    min =n4;
  printf("\n maximum is %d",max);   
  printf("\n minimum is %d",min);
}  
  