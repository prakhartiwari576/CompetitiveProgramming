#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );}
int main()
{
	long long int t,n,k,i,j,sum,count,e,count1;
	scanf("%lld",&t);
	while(t--)
	{
		sum=0;
		scanf("%lld",&n);
		long long int a[n][n],temp;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lld",&a[i][j]);
			}
		}
			for(j=0;j<n;j++)
			{
		       qsort(a[j], n, sizeof(long long int), cmpfunc);
			}
			
		sum=a[n-1][n-1];
		e=a[n-1][n-1];

		count=1;
		for(i=0;i<n-1;i++)
		{
			j=0;
			while(j!=n)
			{ 
				      if(e>a[n-i-2][n-j-1])
				      {
				      	e=a[n-i-2][n-j-1];
				      	sum=sum+e;
				      	count++;
				      	break;
					  }
					  
					  j++;
		   }
		}
		if(count==n)
		printf("%lld\n",sum);
		else
		printf("-1\n");
		
	}
	return 0;
}
