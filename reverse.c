#include<stdio.h>
void main()
{
int i,n,sum=0,num;
scanf("%d",&num);
n=num;
while(n!=0)
{
r=n%10;
sum=sum+(r*10);
n+=10;
}
if(num==n)
printf("reverse");
else
printf("not areverse");
}
