#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,n,*h,t;
	scanf("%d",&n);
	h=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&h[i]);
	t=2*n-1+h[0];
	for(i=0;i<n-1;i++)
	{
		t+=abs(h[i+1]-h[i]);
	}
	printf("%d",t);
	return 0;
	
}