#include<stdio.h>
#include<math.h>
int main()
{ 
  int m1,m2,m3,m4,m5,tot;
  float avg;
  printf("m1,m2,m3,m4,m5 :");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  tot=m1+m2+m3+m4+m5;
  avg=tot/5.0;
  printf("average is %.2f",avg);
}  
  