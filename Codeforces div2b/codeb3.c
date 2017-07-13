#include<stdio.h>
#include<stdlib.h>
void binary(int *bin,int p,int n)
{
	
	int i,d,q,r;
	      d=p;
		for(i=0;i<n+1;i++)
		{   if(d!=0)
			{q=d/2;
			r=d%2;
			bin[i]=r;
			d=q;
			
			}
			else 
				bin[i]=0;
			
		}
		

}

int main()
{
	int **bin;
	int i,j,n,m,k,p[1001],fcount=0,min,dif;
	scanf("%d %d %d",&n,&m,&k);
	for(i=0;i<=m;i++)
		scanf("%d",&p[i]);
	bin=(int**)calloc(m+1,sizeof(int*));
	for(i=0;i<=m;i++)
		bin[i]=(int*)calloc(n+1,sizeof(int));
	   
	for(i=0;i<=m;i++)
     binary(bin[i],p[i],n);
    for(i=0;i<m;i++)
	{ dif=0;
		
	  for(j=0;j<n+1;j++)
	  {  if(bin[m][j]!=bin[i][j])
		  dif++;
      }
      if(dif<=k)
      fcount++;		  
	}
	printf("%d",fcount);
	return 0;
}