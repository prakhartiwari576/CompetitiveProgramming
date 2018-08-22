#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	long int n;
	long long int k,i,j,c,m,p;
	scanf("%lld",&t);
	while(t--)
	{
		c=0;
	   scanf("%ld%lld",&n,&k);
	   long long int a[n],b[n];
	   for(i=0;i<n;i++)
	    {
	    	scanf("%lld",&a[i]);
		 } 
		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
		}
		c=k/a[0];
		p=c*b[0];
		for(i=1;i<n;i++)
		{
			c=k/a[i];
			m=c*b[i];
			if(p<m)
			{
				p=m;
			}
		}
		printf("%lld\n",p);
	}
	return 0;
}
