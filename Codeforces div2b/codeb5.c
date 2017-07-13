#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n;
	long long int l,*a,*dif,max,temp; 
	 double d;
	scanf("%d %I64d",&n,&l);
	a=(long long int*)calloc(n,sizeof(long long int));
	dif=(long long int*)calloc(n+1,sizeof(long long int));
	for(i=0;i<n;i++)
		scanf("%I64d",&a[i]);
	for(i=0;i<n;i++)
		for(j=1+i;j<n;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
				
	dif[0]=a[0];
    dif[n]=l-a[n-1];
    for(i=0;i<n-1;i++)
    dif[i+1]=a[i+1]-a[i];
    
	max=dif[0];
	for(i=0;i<=n;i++)
		if(max<dif[i])
			max=dif[i];
		d=(double)max/2;
		if(d<(double)dif[0]||d<(double)dif[n])
		{	if(dif[0]<dif[n])
				d=(double)dif[n];
			else
	            d=(double)dif[0];
		}			
	printf("%lf",d);
    return 0;	
}