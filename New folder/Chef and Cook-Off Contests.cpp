#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	char a[]="cakewalk";
	char b[]="easy";
	char c[]="simple";
	char d[]="easy-medium";
	char e[]="medium";
	char f[]="medium-hard";
	char g[]="hard";
	long long int t,i,j,count2,k,count,count1,count3,count4;
	scanf("%lld",&t);
	while(t--)
	{
		count=count1=count2=count3=count4=0;
		scanf("%lld",&i);
		for(j=0;j<i;j++)
		{
		scanf("%s",s);
		if(strcmp(s,a)==0)
		count++;
		if(strcmp(s,c)==0)
		count1++;
		if(strcmp(s,b)==0)
		count2++;
		if((strcmp(s,d)==0)||(strcmp(s,e)==0))
		count3++;
		if((strcmp(s,f)==0)||(strcmp(s,g)==0))
		count4++;
	    }
	    if(count!=0&&count1!=0&&count2!=0&&count3!=0&&count4!=0)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}
