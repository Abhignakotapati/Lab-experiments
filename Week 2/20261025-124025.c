#include<stdio.h>
void main()
{ 
  float n1,n2,n3,sum;
  float avg;
  printf("n1,n2,n3:");
  scanf("%f%f%f",&n1,&n2,&n3);
  sum= n1+n2+n3;
  avg= sum/3;
  printf("avg is %f",avg);
}  
  