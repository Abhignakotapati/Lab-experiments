#include<stdio.h>
#include<math.h>
int main()
{ 
  int A,B,C,D,E,F,G,J,i,r1,r2,r3,r4;
  printf("enter A,B,C,D,E,F,G,i,J: ");
  scanf("%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&i,&J);
  r1=A+B*C+(D*E) + F*G;
  printf("\nA+B*C+(D*E) + F*G=%d",r1);
  r2=A/B*C-B+A*D/3;
  printf("\nA/B*C-B+A*D/3=%d",r2);
  r3=A+++B---A;
  printf("\nA+++B---A =%d",r3);
  r4=J= (i++) + (++i);
  printf("\nJ= (i++) + (++i)=%d",r4);
  
}  
  