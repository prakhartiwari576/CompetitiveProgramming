#include <stdio.h>
 
int main(void) {
	long long int t,n,num,a,b;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		a=1000000;
		b=1000000;
		while(n--)
		{
			scanf("%lld ",&num);
			if(a>num)
			{
				b=a;
				a=num;
			}
			else if(b>num)
				b=num;
		}
		printf("%lld\n",(a+b));
	}
	return 0;
}
 
