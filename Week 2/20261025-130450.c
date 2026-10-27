#include<stdio.h>
void main()
{ 
  float temp1,temp2,temp3,temp4;
  printf("\ntemp in celsius : ");
  scanf("%f",&temp1);
  temp2=(temp1*9.0/5.0)+32;
  printf("\ntemperature in fahrenheit is %f",temp2);
  printf("\ntemp in fahrenheit:");
  scanf("%f",&temp3);
  temp4=(temp3-32)*5.0/9.0;
  printf("\ntemp in celsius is %f",temp4);
}  
  