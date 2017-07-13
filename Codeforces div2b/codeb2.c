#include<stdio.h>
int main()
{   
	long long int i,xp=1,n,m,t=0,a[100000];
   scanf("%I64d%I64d",&n,&m);
   for(i=0;i<m;i++)
   scanf("%I64d",&a[i]);
   for(i=0;i<m;i++)
       {  if(xp<a[i])
		   {t+=a[i]-xp;
	        xp=a[i];
		   }
	      else if(xp>a[i])
		  {t+=n-xp+a[i];
	        xp=a[i];
		  }			
			  
        }
	printf("%I64d",t);
	return 0;
}
