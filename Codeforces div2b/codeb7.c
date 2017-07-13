#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,m,i,j;
	char in1[11],in2[11],in3[11],**a,**b,**c;
	scanf("%d %d",&n,&m);
	a=(char**)calloc(m,sizeof(char*));
	b=(char**)calloc(m,sizeof(char*));
	c=(char**)calloc	(n,sizeof(char*));
	for(i=0;i<m;i++)
	{
		scanf("%s %s",in1,in2);
        a[i]=(char*)calloc(strlen(in1)+1,sizeof(char));
		b[i]=(char*)calloc(strlen(in2)+1,sizeof(char));
	    strcpy(a[i],in1);
	    strcpy(b[i],in2);
	}
	for(i=0;i<n;i++)
	{
		scanf("%s",in3);
		c[i]=(char*)calloc(strlen(in3)+1,sizeof(char));
		strcpy(c[i],in3);	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{if(strcmp(a[j],c[i])==0)
			if(strlen(a[j])>strlen(b[j]))	
				c[i]=b[j];
			
		}
	}
	for(i=0;i<n;i++)
		printf("%s ",c[i]);
	return 0;
}
