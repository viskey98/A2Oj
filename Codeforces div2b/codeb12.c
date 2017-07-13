#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ar;
	int n,i,num,flag=0;
	scanf("%d",&n);
	ar=(int*)calloc(n,sizeof(int));
	for(i-0;i<n;i++)
		scanf("%d",&ar[i]);
	for(i=0;flag<2&&i<n-1;)
	{
	  if(ar[i]<=ar[i+1])
	  i++;
	  else
      {
		  flag++;
		  i++;
		  if(flag==1)
			  num=i;
 	  }		  
	  		  
    }
	if(flag==0)
		printf("0");
	if(flag==1&&ar[n-1]<=ar[0])
		printf("%d",n-num);
	else if(flag==1)
		printf("-1");
	if(flag==2)
		printf("-1");
	return 0;
}