#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	long long int t,n,count,i,j,sum;
    cin>>t;
    while(t--)
    {
        sum=0,count=0;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            count+=a[i];
        }
        sort(a,a+n);
        if(n==1)
        {
          cout<<count<<endl;
        }
        else if(n==2)
        {
            cout<<count<<endl;
        }
        else
        {
        for(i=n-1;i>=0;i-=4)
        {
            if(i>=1)
            {
            if(a[i]!=0&&a[i-1]!=0)
            {
                sum=sum+(a[i]+a[i-1]);
            }
            }
            else
            {
                sum+=a[i];
            }
        }
        cout<<sum<<endl;
        }
    }
	return 0;
}
