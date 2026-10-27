#include<stdio.h>
void main()
{ 
  float p,r,t,SI;
  printf("principal amount,rate of interest,time : ");
  scanf("%f%f%f",&p,&r,&t);
  SI= p*r*t/100;
  printf("simple interest is %f",SI);
}  
  