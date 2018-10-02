#include<stdio.h>
int main()
{
    long long int n,t,i,j,u,d,count,p;
    scanf("%lld",&t);
    while(t--)
    {
        p=1;
        count=1;
        scanf("%lld%lld%lld",&n,&u,&d);
        long long int a[n];
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        for(i=0;i<n;i++)
        {
            if(a[i+1]>=a[i])
            {
                if((a[i+1]-a[i])<=u)
                count++;
                else break;
            }
            else if(a[i]>a[i+1])
            {
                if((a[i]-a[i+1])<=d)
                count++;
                else if(p==1)
                {
                    count++;
                    p=0;
                }
                else break; 
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
