#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,flag1=0,flag3=0,flag2=0	;
	long long int n,a1,a2,b1=-1,b2,*a,i1,i2;
	scanf("%I64d",&n);
	a=(long long int*)calloc(n,sizeof(long long int));
	for(i=0;i<n;i++)
		scanf("%I64d",&a[i]);
	i2=i1=1;
	for(i=0;i<n-1;i++)
	{    
        if(flag2==1)
		{
			if(a[i]>a[i+1])
			{
				flag3=1;
				break;
			}
		}
		else if(flag1==0)
		{
			if(a[i]>a[i+1])
			{   a1=a[i];
		        i1=i+1;
		        if(i!=0)
			    b1=a[i-1];
				flag1=1;
				continue;
			}	
		}
		else if(flag1==1)
		{
			if(a[i]<a[i+1])
			{
				a2=a[i];
				i2=i+1;
				b2=a[i+1];
				flag2=1;
				continue;
			}
		}
		
	}
	
		
	if(flag3==0&&flag1==1&&flag2==1&&b1!=-1)
	{
		if(a2>b1&&a1<b2)
			printf("yes\n%I64d %I64d",i1,i2);
		else
			printf("no");
		
		
	}
	if(flag3==0&&flag1==1&&flag2==1&&b1==-1)
	{
		if(b2>a1)
			printf("yes\n%I64d %I64d",i1,i2);
		else
			printf("no");
			
	}
	
	if(flag1==0)
	{ 
		printf("yes\n%I64d %I64d",i1,i2);
	}
	if(flag1==1&&flag2==0)
	{
		i2=n;
		a2=a[n-1];
		if(a2>b1)
		printf("yes\n%I64d %I64d",i1,i2);
		else 
	    printf("no"); 	
	}
	if(flag3==1)
	{
		printf("no");
	}
	return 0;	
}			