#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,k,b;
clrscr();
scanf("%d",&n);
scanf("%d",&k);
b=n-k;
for(i=0;i<n;i++)
{
scanf("%d\n",&a[i]);
}
for(i=b;i<=n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<=k;i++)
{
printf("%d",a[i]);
}
getch();
}
