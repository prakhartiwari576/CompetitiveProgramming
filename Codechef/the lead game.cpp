#include<stdio.h>
int main()
{
	int i,j,k=1,k1=1,s1=0,s2=0;
	scanf("%d",&i);
	int a[i],b[i];
	for(int j=0;j<i;j++)
	{
		scanf("%d%d",&a[j],&b[j]);
		s1=s1+a[j];
		s2=s2+b[j];
		if(s1>s2)
		 {
		 	if(k<s1-s2)
		 	k=s1-s2;
		 }
		 if(s2>s1)
		 {
		 	if(k1<s2-s1)
			 k1=s2-s1;
		 }
	}
	if(k>k1)
	{
		printf("1 ");
		printf("%d",k);
	}
	else
	 {
	 	printf("2 ");
	 	printf("%d",k1);
	 }
 return 0;
}
