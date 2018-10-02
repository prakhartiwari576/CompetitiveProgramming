#include<stdio.h>
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t-->0)
	{
		scanf("%d",&n);int a[n];
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);int k=a[0];
			for(i=1;i<n;i++)
			{
				if(a[i]<k)
				k=a[i];
			}
			while(k>=1)
			{int c=0;
				for(i=0;i<n;i++)
				{
					if(a[i]%k==0)
					c++;
				}
				if(c==n)
				break;
			    else
			    k--;
			}
	
			for(i=0;i<n;i++)
			printf("%d ",(a[i]/k));
	}
	printf("\n");
}  
