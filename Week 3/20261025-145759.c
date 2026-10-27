#include<stdio.h>
#include<math.h>
int main()
{ 
  float P,R,T,CI;
  printf("enter principal amount,rate of interest,time :");
  scanf("%f%f%f",&P,&R,&T);
  CI=P*pow(1+ R/100,T)-P;
  printf("compound interest is %.2f",CI);
}  
  