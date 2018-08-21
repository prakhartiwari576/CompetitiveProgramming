#include<stdio.h>
#include<string.h>
int main()
{
	long long int t,i,j,fact,k,count,count1;
	scanf("%lld",&t);
	while(t--)
	{
		count=0;
		count1=0;
		char a[20],n1[20],n2[20];
		n1[0]=n2[0]='\0';
		scanf("%lld",&i);
		for(int j=0;j<i;j++)
		{
			scanf("%s",a);
			if(j==0||strcmp(n1,a)==0)
			{
				strcpy(n1,a);
				count++;
			}
			else
			{
				strcpy(n2,a);
				count1++;
			}	
		}
		if(count>count1)
		printf("%s\n",n1);
		else if(count1>count)
		printf("%s\n",n2);
		else
		printf("Draw\n");
	}
	return 0;
}
