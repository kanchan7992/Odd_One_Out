#include<stdio.h>
void main()
{ int n,i;
scanf("%d",&n);
int a[n],xor=0;
	for(i=0;i<n;i++)
	{   scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{
	xor=xor^a[i];
}
printf("%d",xor);
}
