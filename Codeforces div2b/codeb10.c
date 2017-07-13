#include<stdio.h>
#include<string.h>
int main()
{ 
    char input[1001];
	int a[26];
    int k,i,count,j,sum=0,max;
	scanf("%s",input);
	count=strlen(input);
	scanf("%d",&k);
	for(i=0;i<26;i++)
		scanf("%d",&a[i]);
	for(i=0;i<count;i++)
	{
		for(j=0;j<26;j++)
		{
		    if(input[i]==(97+j))
			{sum+=(i+1)*a[j];
			break;}
		}
	}
	max=a[0];
	for(i=1;i<26;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	for(i=0,j=count+1;i<k;i++,j++)
	{
		sum+=max*(j);
	}
	printf("%d",sum);
	return 0;
	
		
}