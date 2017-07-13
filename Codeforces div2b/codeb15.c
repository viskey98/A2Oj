#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,s,t,*p,i,ans=0,temp;
	scanf("%d%d%d",&n,&s,&t);
	p=(int*)calloc(n+1,sizeof(int));
	for(i=1;i<n+1;i++)
	{
		scanf("%d",&p[i]);
	}
	if(s!=t)
	{	
	for(i=0,temp=s;i==0||temp!=s;i++)
	{
		if(p[temp]==t)
		{
			ans++;
		    break;
		}
		else
		{
			temp=p[temp];
			ans++;
		}
	}
	}
	if(i>0&&temp==s)
	{
		printf("-1");
	}
	else 
		printf("%d",ans);
	return 0;
}