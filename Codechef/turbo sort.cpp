long long int cmpfunc(const void *a,const void *b)
{
	return( *(int*)a-*(int *)b);
};
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
   long long int t,n,i;
   scanf("%lld",&n);
   long long int a[n];
   for(i=0;i<n;i++)
   {
   	scanf("%lld",&a[i]);
   }
   qsort(a,n,sizeof(long long int),cmpfunc);
   for(i=0;i<n;i++)
   {
   	printf("%lld\n",a[i]);
   }
   return 0;
}
