#include<stdio.h>
int main()
{
   int x,y,z;
   unsigned int n;
   int MOD=1000000007;
  scanf("%d%d",&x,&y);
  scanf("%d",&n);
  z=y-x;
  if(n%6==0)
  {
	  if(z>0)
	  {
		  if(z>MOD)
		  printf("%d",(2*MOD-z)%MOD);
	      else 
		   printf("%d",(MOD-z)%MOD);
	  }
	  else
		  printf("%d",(-1*z)%MOD);
  }
   if(n%6==1)
   {   if(x>0)
	   printf("%d",x%MOD);
       else 
		   printf("%d",(MOD+x)%MOD);
   }	   
   if(n%6==2)
   {   
       if(y>0)
	   printf("%d",y%MOD);
       else
		   printf("%d",(MOD+y)%MOD);
   }
   if(n%6==3)
   {
       if(z>0)
	   printf("%d",z%MOD);
       else
	   { if(z<MOD)
			   printf("%d",(2*MOD+z)%MOD);
		   else
		   printf("%d",(MOD+z)%MOD);
	   }
   }
   if(n%6==4)
   {  if(x>0)	  	   
	   {
		   if(x>MOD)
	       printf("%d",(2*MOD-x)%MOD);
	       else
			printf("%d",(MOD-x)%MOD);
        }
		else 
			printf("%d",(-1*x)%MOD);
	   
   }
   if(n%6==5)
   {
	   if(y>0)
	   {   if(y>MOD)
		   printf("%d",(2*MOD-y)%MOD);
	       else 
			   printf("%d",(MOD-y)%MOD);
	   }
	   else
		   printf("%d",(-1*y)%MOD);         
   }   
   
  return 0;  
}