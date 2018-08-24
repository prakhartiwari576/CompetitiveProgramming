#include<stdio.h>
int main()
{
int t,temp;
int a[4];
scanf("%d",&t);
while(t--)
{
for(int i=0;i<4;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<4;i++)
{
	for(int j=0;j<3-i;j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
if((a[0]==a[1])&&(a[2]==a[3]))
printf("YES\n");
else
printf("NO\n");
}
return 0;
}

