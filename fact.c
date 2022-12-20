#include<stdio.h>
{
void fact()
{
  fact();
}
void fact()
}
int n,i,f=1;
printf("\n ENter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  f=f*i;
}
printf("\n Factorial is = %d ",f);
}
