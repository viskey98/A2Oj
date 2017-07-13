		#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long long int nc2(long long int n)
{   if(n!=1)
	return n*(n-1)/2;
	else 
		return 0;
	
}

int main()
{
	long long int i,h,n,m,max,min,p,maxf=0,minf=0;
    long long int *ming,*maxg;
	
	scanf("%I64d %I64d",&n,&m);
	if(m!=n)
	{
	h=n/m;
	p=n%m;
	minf=(p*(nc2(h+1)))+((m-p)*(nc2(h)));
	p=n-(m-1);
	maxf= nc2(p);
	}
	else 
	{maxf=0;
    minf=0;}
	printf("%I64d %I64d",minf,maxf);
	return 0;
	
}