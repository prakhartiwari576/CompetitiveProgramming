#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,m,n,x,l,y,i,j,count1,count2,count3,count4,b,c;
    char s[10000];
    scanf("%lld",&t);
    j=1;
    while(t--)
    {
        count1=0,count2=0;
        scanf("%lld%lld",&m,&n);
        scanf("%lld%lld",&x,&y);
        scanf("%lld",&l);
        scanf("%s",s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='L')
            count1--;
            else if(s[i]=='R')
            count1++;
            else if(s[i]=='U')
            count2++;
            else if(s[i]=='D')
            count2--;
        }
        //printf("%lld %lld\n",count1,count2);
        b=count1;
        c=count2;
        if(b<0||b>m||c<0||c>n)
        printf("Case %lld: DANGER\n",j);
        else if(b==x&&c==y)
        printf("Case %lld: REACHED\n",j);
        else  
        printf("Case %lld: SOMEWHERE\n",j);
        j++;
    }
    return 0;
}
