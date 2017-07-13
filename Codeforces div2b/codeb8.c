#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isperfectsquare(long long int a)
{
	long long int ival;
	long double fval;
	fval=sqrt(a);
	ival=fval;
	if(ival==fval)
		return 1;
	else return 0;
}
int isprime(long long int b)
{
	long long int i;
	int flag=1;
	if(b==2)
		return 1;
    else if(b%2==0)
		return 0;
	else if(isperfectsquare(b)==1)
	return 0;
	else
    {for(i=3;i<=sqrt(b);i+=2)
	{ 	
		if(b%i==0)
		{	flag=0;
	        break;
		}
	}   
    return flag;
	}
	
}
int main()
{
	long long int n, *x,i,j,*prim,max,y,count;
	int flag;
	scanf("%I64d",&n);
	x=(long long int*)calloc(n,sizeof(long long int));
	prim=(long long int*)calloc(n,sizeof(long long int));
	for(i=0;i<n;i++)
		scanf("%I64d",&x[i]);
	for(i=0;i<n;i++)
	{
		if(x[i]==1)
			printf("NO\n");
		else if(x[i]<=3)
			printf("NO\n");
        else if(isperfectsquare(x[i])==0)
			printf("NO\n");
		else if(isprime(sqrt(x[i]))==0)
				printf("NO\n");
		else
                printf("YES\n");
   	}
			
	return 0;	
}