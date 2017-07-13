#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	long long int i,j,a,num,count=0,count1=0,temp;
	int *even ,*digit;
	char input[100001];
	scanf("%s",input);
	count=strlen(input);
	
	digit=(int*)calloc(count,sizeof(int));
	even=(int*)calloc(count,sizeof(int));	
	for(i=0;i<count;i++)
	{	digit[i]=input[count-i-1]-'0';
	}
	for(i=1,j=0;i<count;i++)
	{
		if(digit[i]%2==0)
		{
			even[j]=i;
			j++;
			count1++;
		}
	
		
	}
	if(count1>0)
	{
		for(i=count1-1;i>=0;i--)
		{	if(digit[even[i]]<digit[0]&&i!=0)
			{
				temp=digit[even[i]];
				digit[even[i]]=digit[0];
				digit[0]=temp;
				break;
			}
			else if(i==0)
			{
			    temp=digit[even[i]];
				digit[even[i]]=digit[0];
				digit[0]=temp;
					
			}
		}
	}
	if(count1>0)
    {
		for(i=count-1;i>=0;i--)
        {
	    printf("%d",digit[i]);
	    } 	
    }	
	else printf("-1");
	return 0;
	
}  